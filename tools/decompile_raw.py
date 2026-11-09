#!/usr/bin/env python3
"""Re-run the raw-image targets with forced disassembly (ForceDisasm.java)."""
import os
import subprocess
import time

ROOT = r'C:\Users\quant\Documents\Anycubic'
DECO = os.path.join(ROOT, 'ANYCUBICS1DECO')
GHIDRA = r'C:\REA\tools\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
SCRIPTS = os.path.join(ROOT, 'ghidra_scripts')
DEC = os.path.join(DECO, 'decompiled', 'extras')
PROJ = os.path.join(DECO, '_ghidra_projects')

JOBS = [
    ('kernel', os.path.join(DECO, 'boot', 'kernel.bin'), 'boot__kernel',
     ['-processor', 'ARM:LE:32:v7', '-loader', 'BinaryLoader',
      '-loader-baseAddr', '0x60008000', '-loader-blockName', 'kernel']),
    ('uboot', os.path.join(DECO, 'uboot', 'uboot_unpacked.bin'), 'uboot__uboot',
     ['-processor', 'ARM:LE:32:v7', '-loader', 'BinaryLoader',
      '-loader-baseAddr', '0x00200000', '-loader-blockName', 'uboot']),
    ('mcu', os.path.join(ROOT, r'fw\2.7.2.7\payload\firmware_v1.4.3_20260303.bin'), 'mcu__firmware_v1.4.3',
     ['-processor', 'ARM:LE:32:Cortex', '-loader', 'BinaryLoader',
      '-loader-baseAddr', '0x0800A000', '-loader-blockName', 'mcu']),
]


def main():
    os.makedirs(PROJ, exist_ok=True)
    for i, (label, src, sub, extra) in enumerate(JOBS):
        outdir = os.path.join(DEC, sub)
        if os.path.exists(os.path.join(outdir, 'index.csv')):
            print('%-8s skip' % label)
            continue
        os.makedirs(outdir, exist_ok=True)
        proj = os.path.join(PROJ, 'f_%02d' % i)
        os.makedirs(proj, exist_ok=True)
        cmd = [GHIDRA, proj, 'f%02d' % i, '-import', src] + extra + [
            '-scriptPath', SCRIPTS, '-postScript', 'ForceDisasm.java', outdir, '-deleteProject']
        t0 = time.time()
        r = subprocess.run(cmd, capture_output=True, text=True, errors='replace')
        done = [l.strip() for l in (r.stdout or '').splitlines() if 'DONE' in l]
        print('%-8s %5.0fs %s' % (label, time.time() - t0, done[0] if done else 'FAILED'))
        if not done:
            open(os.path.join(outdir, 'EXPORT.FAILED'), 'w').write((r.stdout or '')[-3000:])


if __name__ == '__main__':
    main()
