#!/usr/bin/env python3
"""Retry every function that failed to decompile, then merge the results back.

Scans decompiled/*/index.csv (and extras), groups failures per binary, runs
RetryDecomp.java with a 600 s decompiler timeout on just those addresses, appends the
recovered C to the binary's .c file and flips its index rows to ok.
"""
import csv
import json
import os
import re
import shutil
import subprocess
import sys
import time

ROOT = r'C:\Users\quant\Documents\Anycubic'
DECO = os.path.join(ROOT, 'ANYCUBICS1DECO')
DEC = os.path.join(DECO, 'decompiled')
GHIDRA = r'C:\REA\tools\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
SCRIPTS = os.path.join(ROOT, 'ghidra_scripts')
PROJ = os.path.join(DECO, '_ghidra_projects')
WORK = os.path.join(DECO, '_retry')

RAW_ARGS = {
    'uboot__uboot': ['-processor', 'ARM:LE:32:v7', '-loader', 'BinaryLoader',
                     '-loader-baseAddr', '0x00200000', '-loader-blockName', 'uboot'],
    'mcu__firmware_v1.4.3': ['-processor', 'ARM:LE:32:Cortex', '-loader', 'BinaryLoader',
                             '-loader-baseAddr', '0x0800A000', '-loader-blockName', 'mcu'],
}

EXTRA_SRC = {
    'app__gkcam': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\gkcam'),
    'app__libc_helper': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\libc_helper.so'),
    'app__logmain': os.path.join(ROOT, r'fw\2.7.2.7\payload\logmain'),
    'uboot__uboot': os.path.join(DECO, 'uboot', 'uboot_unpacked.bin'),
    'boot__kernel': os.path.join(DECO, 'boot', 'kernel_vmlinux_sized.elf'),
    # app binaries live in decompiled/app/<name>
    'gklib': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\gklib'),
    'gkapi': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\gkapi'),
    'K3SysUi': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\K3SysUi'),
    'engineMode': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\engineMode'),
    'gkcam': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\gkcam'),
    'libc_helper': os.path.join(ROOT, r'fw\2.7.2.7\payload\app\libc_helper.so'),
    'logmain': os.path.join(ROOT, r'fw\2.7.2.7\payload\logmain'),
}


def flat(rel):
    return re.sub(r'[^A-Za-z0-9._-]+', '__', rel)


def build_source_map():
    m = {}
    for it in json.load(open(os.path.join(DECO, 'inventory.json'), encoding='utf8')):
        m[flat(it['path'])] = os.path.join(DECO, it['path'].replace('/', os.sep))
    m.update(EXTRA_SRC)
    for k in ('app__gklib', 'app__gkapi', 'app__K3SysUi', 'app__engineMode'):
        pass
    return m


def failures(d):
    rows = list(csv.DictReader(open(os.path.join(d, 'index.csv'), encoding='utf8', errors='replace')))
    return [r for r in rows if r.get('status') not in (None, 'ok')]


def main():
    global WORK
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument('--processor', default='ARM:LE:32:v5',
                    help='Ghidra language to force (v5 decodes code that v7/v8 decompiler rejects)')
    ap.add_argument('--include-kernel', action='store_true')
    ap.add_argument('--shard', default='0/1')
    args = ap.parse_args()

    srcmap = build_source_map()
    os.makedirs(WORK, exist_ok=True)
    os.makedirs(PROJ, exist_ok=True)

    todo = []
    dirs = []
    for name in sorted(os.listdir(DEC)):
        p = os.path.join(DEC, name)
        if not os.path.isdir(p):
            continue
        if os.path.exists(os.path.join(p, 'index.csv')):
            dirs.append((p, name))
        else:
            for sub in sorted(os.listdir(p)):
                q = os.path.join(p, sub)
                if os.path.isdir(q) and os.path.exists(os.path.join(q, 'index.csv')):
                    dirs.append((q, name + '/' + sub))
    for d, entry in dirs:
        if entry.endswith('boot__kernel') and not args.include_kernel:
            continue                      # rebuilt separately from kallsyms
        bad = failures(d)
        if not bad:
            continue
        src = srcmap.get(entry.split('/')[-1]) or srcmap.get(entry)
        if not src or not os.path.exists(src):
            print('%-46s %d failures, source unknown -> skipped' % (entry, len(bad)))
            continue
        todo.append((entry.replace('/', '_'), d, src, bad))

    k, n = (int(x) for x in args.shard.split('/'))
    todo = [t for i, t in enumerate(todo) if i % n == k]
    WORK = WORK + '_s%d' % k
    os.makedirs(WORK, exist_ok=True)
    print('shard %s: %d binaries with failures, %d functions total'
          % (args.shard, len(todo), sum(len(t[3]) for t in todo)))
    for i, (entry, d, src, bad) in enumerate(todo):
        csvp = os.path.join(WORK, entry + '.csv')
        with open(csvp, 'w', encoding='utf8') as f:
            f.write('# addr,name\n')
            for r in bad:
                f.write('0x%s,%s\n' % (r['address'], r['name']))
        proj = os.path.join(PROJ, 'r%s_%02d' % (args.shard.replace('/', ''), i))
        os.makedirs(proj, exist_ok=True)
        if entry in RAW_ARGS:
            raw = list(RAW_ARGS[entry])
            if args.processor:
                j = raw.index('-processor')
                raw[j + 1] = args.processor
            extra = raw
        else:
            extra = ['-processor', args.processor] if args.processor else []
        cmd = [GHIDRA, proj, 'r%s%02d' % (args.shard.replace('/', ''), i), '-import', src, *extra,
               '-scriptPath', SCRIPTS, '-postScript', 'RetryDecomp.java', csvp, WORK,
               '-deleteProject']
        t0 = time.time()
        r = subprocess.run(cmd, capture_output=True, text=True, errors='replace')
        done = [l.strip() for l in (r.stdout or '').splitlines() if 'DONE retry' in l]
        print('[%d/%d] %-44s %4d fails %5.0fs %s'
              % (i + 1, len(todo), entry, len(bad), time.time() - t0,
                 done[0].split('DONE retry ')[-1] if done else 'RUN FAILED'))
        # merge
        base = None
        for f in os.listdir(d):
            if f.endswith('.c') and not f.startswith('retry-'):
                base = f
                break
        rc = os.path.join(WORK, 'retry-' + (os.path.basename(src)) + '.c')
        # Ghidra names the output after the program name; find it
        cands = [f for f in os.listdir(WORK) if f.startswith('retry-') and f.endswith('.c')
                 and f != os.path.basename(base or '')]
        cands = [f for f in cands if f not in os.listdir(d)]
        # index rows
        ric = None
        for f in os.listdir(WORK):
            if f.startswith('retry-index-') and f.endswith('.csv'):
                ric = os.path.join(WORK, f)
        if not ric:
            continue
        new = {row['address'].lstrip('0'): row for row in csv.DictReader(open(ric, encoding='utf8'))
               if row['status'] == 'ok'}
        if not new:
            continue
        # append C
        target_c = os.path.join(d, base)
        src_c = None
        for f in os.listdir(WORK):
            if f.startswith('retry-') and f.endswith('.c'):
                cand = os.path.join(WORK, f)
                if os.path.getsize(cand) > 60:
                    src_c = cand
                    break
        if src_c and base:
            with open(target_c, 'a', encoding='utf8', errors='replace') as out:
                out.write('\n// ---- retried functions (long timeout) ----\n')
                out.write(open(src_c, encoding='utf8', errors='replace').read())
        # flip index rows
        ip = os.path.join(d, 'index.csv')
        rows = list(csv.DictReader(open(ip, encoding='utf8', errors='replace')))
        fixed = 0
        for row in rows:
            key = row['address'].lstrip('0')
            if key in new:
                row['status'] = 'ok'
                fixed += 1
        with open(ip, 'w', newline='', encoding='utf8') as f:
            w = csv.DictWriter(f, fieldnames=rows[0].keys())
            w.writeheader()
            w.writerows(rows)
        print('        merged %d/%d into %s' % (fixed, len(bad), entry))
        for f in os.listdir(WORK):
            os.remove(os.path.join(WORK, f))


if __name__ == '__main__':
    main()
