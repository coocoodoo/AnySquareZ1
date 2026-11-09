#!/usr/bin/env python3
"""Decompile the targets that are not plain ELFs in inventory.json:
   - the app binaries left out of the image inventory (gkcam, libc_helper.so, logmain)
   - raw images: Linux kernel (ARM32), U-Boot (ARM32), MCU firmware (Cortex-M)

Raw images need an explicit processor and base address; they have no ELF headers.
"""
import json
import os
import re
import subprocess
import time

ROOT = r'C:\Users\quant\Documents\Anycubic'
DECO = os.path.join(ROOT, 'ANYCUBICS1DECO')
GHIDRA = r'C:\REA\tools\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
SCRIPTS = os.path.join(ROOT, 'ghidra_scripts')
DEC = os.path.join(DECO, 'decompiled')
PROJ = os.path.join(DECO, '_ghidra_projects')

JOBS = [
    # (label, source path, out subdir, extra ghidra args)
    ('gkcam', os.path.join(ROOT, r'fw\2.7.2.7\payload\app\gkcam'), 'app/gkcam', []),
    ('libc_helper', os.path.join(ROOT, r'fw\2.7.2.7\payload\app\libc_helper.so'), 'app/libc_helper', []),
    ('logmain', os.path.join(ROOT, r'fw\2.7.2.7\payload\logmain'), 'app/logmain', []),
    ('kernel', os.path.join(DECO, 'boot', 'kernel.bin'), 'boot/kernel', [
        '-processor', 'ARM:LE:32:v7', '-loader', 'BinaryLoader',
        '-loader-baseAddr', '0x60008000', '-loader-blockName', 'kernel']),
    ('uboot', os.path.join(DECO, 'uboot', 'uboot_unpacked.bin'), 'uboot/uboot', [
        '-processor', 'ARM:LE:32:v7', '-loader', 'BinaryLoader',
        '-loader-baseAddr', '0x00200000', '-loader-blockName', 'uboot']),
    ('mcu', os.path.join(ROOT, r'fw\2.7.2.7\payload\firmware_v1.4.3_20260303.bin'), 'mcu/firmware_v1.4.3', [
        '-processor', 'ARM:LE:32:Cortex', '-loader', 'BinaryLoader',
        '-loader-baseAddr', '0x0800A000', '-loader-blockName', 'mcu']),
]


def main():
    os.makedirs(PROJ, exist_ok=True)
    for i, (label, src, sub, extra) in enumerate(JOBS):
        outdir = os.path.join(DEC, 'extras', sub.replace('/', '__'))
        idx = os.path.join(outdir, 'index.csv')
        if os.path.exists(idx):
            print('%-12s skip (done)' % label)
            continue
        if not os.path.exists(src):
            print('%-12s MISSING %s' % (label, src))
            continue
        os.makedirs(outdir, exist_ok=True)
        proj = os.path.join(PROJ, 'x_%02d' % i)
        os.makedirs(proj, exist_ok=True)
        cmd = [GHIDRA, proj, 'x%02d' % i, '-import', src] + extra + [
            '-scriptPath', SCRIPTS,
            '-postScript', 'ExportDecomp.java', outdir, '-', '-deleteProject']
        t0 = time.time()
        r = subprocess.run(cmd, capture_output=True, text=True, errors='replace')
        dt = time.time() - t0
        done = [l.strip() for l in (r.stdout or '').splitlines() if 'DONE' in l]
        print('%-12s %5.0fs  %s' % (label, dt, done[0] if done else 'FAILED'))
        if not done:
            open(os.path.join(outdir, 'EXPORT.FAILED'), 'w').write((r.stdout or '')[-3000:])
        # normalise output names
        for f in os.listdir(outdir):
            if f.endswith('.c') and f != label + '.c':
                os.replace(os.path.join(outdir, f), os.path.join(outdir, label + '.c'))
        for f in os.listdir(outdir):
            if f.endswith('.index.csv') and f != 'index.csv':
                os.replace(os.path.join(outdir, f), os.path.join(outdir, 'index.csv'))


if __name__ == '__main__':
    main()
