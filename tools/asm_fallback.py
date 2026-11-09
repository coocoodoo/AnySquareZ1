#!/usr/bin/env python3
"""Last resort for functions the decompiler refuses: export annotated ARM listing so
every function has an artifact. Marks those rows 'asm' in the index."""
import csv
import json
import os
import re
import shutil
import subprocess

ROOT = r'C:\Users\quant\Documents\Anycubic'
DECO = os.path.join(ROOT, 'ANYCUBICS1DECO')
DEC = os.path.join(DECO, 'decompiled')
GHIDRA = r'C:\REA\tools\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
SCRIPTS = os.path.join(ROOT, 'ghidra_scripts')
PROJ = os.path.join(DECO, '_ghidra_projects')
WORK = os.path.join(DECO, '_asm')

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
RAW = {
    'uboot__uboot': ['-processor', 'ARM:LE:32:v7', '-loader', 'BinaryLoader',
                     '-loader-baseAddr', '0x00200000', '-loader-blockName', 'uboot'],
    'mcu__firmware_v1.4.3': ['-processor', 'ARM:LE:32:Cortex', '-loader', 'BinaryLoader',
                             '-loader-baseAddr', '0x0800A000', '-loader-blockName', 'mcu'],
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


def main():
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument('--shard', default='0/1')
    a = ap.parse_args()
    k, n = (int(x) for x in a.shard.split('/'))
    global WORK
    WORK = WORK + '_s%d' % k
    shutil.rmtree(WORK, ignore_errors=True)
    os.makedirs(WORK, exist_ok=True)
    os.makedirs(PROJ, exist_ok=True)
    todo = []
    for base, dirs, files in os.walk(DEC):
        if 'index.csv' not in files:
            continue
        rows = [r for r in csv.DictReader(open(os.path.join(base, 'index.csv'), encoding='utf8', errors='replace'))
                if r.get('status') not in ('ok', 'asm')]
        if rows:
            entry = os.path.relpath(base, DEC).replace('\\', '__').replace('/', '__')
            if entry.startswith('extras__'):
                entry = entry[len('extras__'):]
            todo.append((entry, base, source_for(entry), rows))
    todo = [t for i, t in enumerate(todo) if i % n == k]
    print('asm shard %s: %d binaries, %d functions' % (a.shard, len(todo), sum(len(t[3]) for t in todo)), flush=True)
    for i, (entry, base, src, rows) in enumerate(todo):
        if not src or not os.path.exists(src):
            print('%-44s no source' % entry)
            continue
        csvp = os.path.join(WORK, entry + '.csv')
        with open(csvp, 'w', encoding='utf8') as f:
            for r in rows:
                f.write('%s,%s\n' % (r['address'], r['name']))
        proj = os.path.join(PROJ, 'a%s_%02d' % (a.shard.replace('/', ''), i))
        os.makedirs(proj, exist_ok=True)
        cmd = [GHIDRA, proj, 'a%s%02d' % (a.shard.replace('/', ''), i), '-import', src, *RAW.get(entry, []),
               '-scriptPath', SCRIPTS, '-postScript', 'ExportAsm.java', csvp, WORK,
               '-deleteProject']
        subprocess.run(cmd, capture_output=True, text=True, errors='replace')
        ic = os.path.join(WORK, 'asm-index-%s.csv' % os.path.basename(src))
        if not os.path.exists(ic):
            print('%-44s NO OUTPUT' % entry)
            continue
        got = {r['address'].lstrip('0') for r in csv.DictReader(open(ic, encoding='utf8', errors='replace'))
               if r['status'] == 'asm'}
        ac = os.path.join(WORK, 'asm-%s.c' % os.path.basename(src))
        cfile = [f for f in os.listdir(base) if f.endswith('.c')]
        if os.path.exists(ac) and cfile:
            with open(os.path.join(base, cfile[0]), 'a', encoding='utf8', errors='replace') as dst:
                dst.write('\n// ---- ARM listings (decompiler rejects these) ----\n')
                dst.write(open(ac, encoding='utf8', errors='replace').read())
        ip = os.path.join(base, 'index.csv')
        allrows = list(csv.DictReader(open(ip, encoding='utf8', errors='replace')))
        n = 0
        for r in allrows:
            if r['address'].lstrip('0') in got:
                r['status'] = 'asm'
                n += 1
        with open(ip, 'w', newline='', encoding='utf8') as f:
            w = csv.DictWriter(f, fieldnames=allrows[0].keys())
            w.writeheader()
            w.writerows(allrows)
        print('%-44s %d listed as asm' % (entry, n))
        for f in os.listdir(WORK):
            os.remove(os.path.join(WORK, f))


if __name__ == '__main__':
    main()
