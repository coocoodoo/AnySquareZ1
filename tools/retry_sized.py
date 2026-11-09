#!/usr/bin/env python3
"""Rebuild + decompile the functions that failed, using exact symbol sizes and an
older ARM language (v5 decodes code that v7/v8 puke on). Merges results back.

  python retry_sized.py --shard 0/3
"""
import argparse
import csv
import json
import os
import re
import shutil
import subprocess
import time

ROOT = r'C:\Users\quant\Documents\Anycubic'
DECO = os.path.join(ROOT, 'ANYCUBICS1DECO')
DEC = os.path.join(DECO, 'decompiled')
GHIDRA = r'C:\REA\tools\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
SCRIPTS = os.path.join(ROOT, 'ghidra_scripts')
PROJ = os.path.join(DECO, '_ghidra_projects')

RAW = {
    'uboot__uboot': ['-processor', 'ARM:LE:32:v5', '-loader', 'BinaryLoader',
                     '-loader-baseAddr', '0x00200000', '-loader-blockName', 'uboot'],
    'mcu__firmware_v1.4.3': ['-processor', 'ARM:LE:32:v5', '-loader', 'BinaryLoader',
                             '-loader-baseAddr', '0x0800A000', '-loader-blockName', 'mcu'],
}

SRC = {
    'app__gkcam': r'fw\2.7.2.7\payload\app\gkcam',
    'app__libc_helper': r'fw\2.7.2.7\payload\app\libc_helper.so',
    'app__logmain': r'fw\2.7.2.7\payload\logmain',
    'app__gklib': r'fw\2.7.2.7\payload\app\gklib',
    'app__gkapi': r'fw\2.7.2.7\payload\app\gkapi',
    'app__K3SysUi': r'fw\2.7.2.7\payload\app\K3SysUi',
    'app__engineMode': r'fw\2.7.2.7\payload\app\engineMode',
    'boot__kernel': r'ANYCUBICS1DECO\boot\kernel_vmlinux_sized.elf',
    'uboot__uboot': r'ANYCUBICS1DECO\uboot\uboot_unpacked.bin',
    'mcu__firmware_v1.4.3': r'fw\2.7.2.7\payload\firmware_v1.4.3_20260303.bin',
}


def flat(rel):
    return re.sub(r'[^A-Za-z0-9._-]+', '__', rel)


def source_for(entry):
    if entry in SRC:
        p = SRC[entry]
        return p if os.path.isabs(p) else os.path.join(ROOT, p)
    for it in json.load(open(os.path.join(DECO, 'inventory.json'), encoding='utf8')):
        if flat(it['path']) == entry:
            return os.path.join(DECO, it['path'].replace('/', os.sep))
    return None


def collect():
    out = []
    for base, dirs, files in os.walk(DEC):
        if 'index.csv' not in files:
            continue
        rows = [r for r in csv.DictReader(open(os.path.join(base, 'index.csv'), encoding='utf8', errors='replace'))
                if r.get('status') not in (None, 'ok')]
        if not rows:
            continue
        entry = os.path.relpath(base, DEC).replace('\\', '__').replace('/', '__')
        if entry.startswith('extras__'):
            entry = entry[len('extras__'):]
        src = source_for(entry)
        out.append((entry, base, src, rows))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--shard', default='0/1')
    ap.add_argument('--processor', default='ARM:LE:32:v5')
    a = ap.parse_args()
    k, n = (int(x) for x in a.shard.split('/'))
    work = os.path.join(DECO, '_sized_s%d' % k)
    shutil.rmtree(work, ignore_errors=True)
    os.makedirs(work, exist_ok=True)
    os.makedirs(PROJ, exist_ok=True)

    todo = [t for i, t in enumerate(collect()) if i % n == k]
    print('shard %s: %d binaries, %d functions' % (a.shard, len(todo),
                                                   sum(len(t[3]) for t in todo)), flush=True)
    for i, (entry, base, src, rows) in enumerate(todo):
        if not src or not os.path.exists(src):
            print('%-44s no source, skipped' % entry, flush=True)
            continue
        csvp = os.path.join(work, entry + '.csv')
        with open(csvp, 'w', encoding='utf8') as f:
            for r in rows:
                f.write('%s,%s,%s\n' % (r['address'], r['name'], r['size'] or 0))
        proj = os.path.join(PROJ, 's%s_%02d' % (a.shard.replace('/', ''), i))
        os.makedirs(proj, exist_ok=True)
        cmd = [GHIDRA, proj, 's%s%02d' % (a.shard.replace('/', ''), i), '-import', src,
               *RAW.get(entry, ['-processor', a.processor]),
               '-scriptPath', SCRIPTS, '-postScript', 'RetrySized.java', csvp, work,
               '-deleteProject']
        t0 = time.time()
        subprocess.run(cmd, capture_output=True, text=True, errors='replace')
        outcsv = os.path.join(work, 'sized-index-%s.csv' % os.path.basename(src))
        outc = os.path.join(work, 'sized-%s.c' % os.path.basename(src))
        if not os.path.exists(outcsv):
            print('[%d/%d] %-40s NO OUTPUT (%.0fs)' % (i + 1, len(todo), entry, time.time() - t0), flush=True)
            continue
        new_rows = list(csv.DictReader(open(outcsv, encoding='utf8', errors='replace')))
        good = {r['address'].lstrip('0') for r in new_rows if r['status'] == 'ok'}
        # append C
        cfile = [f for f in os.listdir(base) if f.endswith('.c')]
        if outc and os.path.exists(outc) and cfile:
            with open(os.path.join(base, cfile[0]), 'a', encoding='utf8', errors='replace') as dst:
                dst.write('\n// ---- rebuilt functions (fixed language + exact size) ----\n')
                dst.write(open(outc, encoding='utf8', errors='replace').read())
        # flip index
        ip = os.path.join(base, 'index.csv')
        allrows = list(csv.DictReader(open(ip, encoding='utf8', errors='replace')))
        fixed = 0
        for r in allrows:
            if r['address'].lstrip('0') in good:
                r['status'] = 'ok'
                fixed += 1
        with open(ip, 'w', newline='', encoding='utf8') as f:
            w = csv.DictWriter(f, fieldnames=allrows[0].keys())
            w.writeheader()
            w.writerows(allrows)
        print('[%d/%d] %-40s %d/%d fixed  %4.0fs'
              % (i + 1, len(todo), entry, fixed, len(rows), time.time() - t0), flush=True)
        for f in os.listdir(work):
            os.remove(os.path.join(work, f))


if __name__ == '__main__':
    main()
