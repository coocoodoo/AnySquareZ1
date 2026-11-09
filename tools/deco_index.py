#!/usr/bin/env python3
"""Build ANYCUBICS1DECO/README.md + INDEX.md from the inventory and decompiled output."""
import csv
import json
import os
import re
import time

ROOT = r'C:\Users\quant\Documents\Anycubic\ANYCUBICS1DECO'


def flat(rel):
    return re.sub(r'[^A-Za-z0-9._-]+', '__', rel)


def count(path):
    n = 0
    with open(path, encoding='utf8', errors='replace') as f:
        for line in f:
            if line.startswith('/* ===== '):
                n += 1
    return n


def main():
    inv = json.load(open(os.path.join(ROOT, 'inventory.json'), encoding='utf8'))
    rows = []
    total_fn = 0
    done_files = 0
    failed = []
    for it in inv:
        d = os.path.join(ROOT, 'decompiled', flat(it['path']))
        idx = os.path.join(d, 'index.csv')
        cfile = os.path.join(d, os.path.basename(it['path']) + '.c')
        fn = 0
        status = 'pending'
        if os.path.exists(idx):
            try:
                fn = max(0, sum(1 for _ in open(idx, encoding='utf8', errors='replace')) - 1)
            except Exception:
                fn = 0
            status = 'ok'
            done_files += 1
            total_fn += fn
        elif os.path.exists(os.path.join(d, 'EXPORT.FAILED')):
            status = 'failed'
            failed.append(it['path'])
        rows.append((it['path'], it['size'], it.get('type', ''), status, fn))

    # extras (app binaries + raw images)
    extras = []
    for label, sub in (('gklib', 'app/gklib'), ('gkapi', 'app/gkapi'), ('K3SysUi', 'app/K3SysUi'),
                       ('engineMode', 'app/engineMode'), ('gkcam', 'extras/app__gkcam'),
                       ('libc_helper', 'extras/app__libc_helper'), ('logmain', 'extras/app__logmain'),
                       ('kernel', 'extras/boot__kernel'), ('uboot', 'extras/uboot__uboot')):
        d = os.path.join(ROOT, 'decompiled', sub)
        idx = os.path.join(d, 'index.csv')
        n = 0
        if os.path.exists(idx):
            n = max(0, sum(1 for _ in open(idx, encoding='utf8', errors='replace')) - 1)
        elif os.path.isdir(d):
            n = sum(count(os.path.join(d, f)) for f in os.listdir(d) if f.endswith('.c'))
        extras.append((label, n, 'ok' if n else 'pending'))

    groups = {}
    for path, size, typ, status, fn in rows:
        img = path.split('/')[1] if path.startswith('rootfs/') else 'other'
        g = groups.setdefault(img, {'files': 0, 'ok': 0, 'fn': 0, 'bytes': 0})
        g['files'] += 1
        g['bytes'] += size
        g['fn'] += fn
        if status == 'ok':
            g['ok'] += 1

    lines = []
    lines.append('# ANYCUBICS1DECO — decompiled Anycubic Kobra S1 firmware 2.7.2.7\n')
    lines.append('Generated %s\n' % time.strftime('%Y-%m-%d %H:%M'))
    lines.append('Source artifact: `KS1_2.7.2.7.swu` (md5 49b51f8fbee789c652161f30828d82c0)\n')
    lines.append('## What is in here\n')
    lines.append('```')
    lines.append('rootfs/system/      SquashFS system.img   -> base OS, busybox, gdb, python, klipper bits')
    lines.append('rootfs/oem/         SquashFS oem.img      -> Rockchip media libs, wifi drivers, kernel modules')
    lines.append('rootfs/ac_lib/      ext4 ac_lib.img       -> Qt, ffmpeg, openssl, Anycubic runtime libs')
    lines.append('boot/               FIT image            -> Linux kernel + fdt + resource')
    lines.append('uboot/              FIT image            -> U-Boot (lzma) + dtb')
    lines.append('decompiled/app/     gklib, gkapi, K3SysUi, engineMode (per-package .c + index.csv)')
    lines.append('decompiled/extras/  gkcam, libc_helper, logmain, kernel, uboot')
    lines.append('decompiled/<image>/ every other ELF found in the rootfs trees, one directory each')
    lines.append('inventory.json      every ELF with arch/type/size')
    lines.append('INDEX.md            per-binary function counts and status')
    lines.append('```')
    lines.append('\n## Coverage\n')
    lines.append('| image | ELFs | decompiled | functions | size |')
    lines.append('|---|---|---|---|---|')
    for img in sorted(groups):
        g = groups[img]
        lines.append('| %s | %d | %d | %d | %.1f MB |' % (img, g['files'], g['ok'], g['fn'], g['bytes'] / 1e6))
    lines.append('| **ELF total** | **%d** | **%d** | **%d** | **%.1f MB** |'
                 % (len(rows), done_files, total_fn, sum(r[1] for r in rows) / 1e6))
    ex_fn = sum(e[1] for e in extras)
    lines.append('| app binaries + raw images | %d | %d | %d | — |'
                 % (len(extras), sum(1 for e in extras if e[2] == 'ok'), ex_fn))
    lines.append('\n**Grand total: %d decompiled functions** across %d binaries.\n'
                 % (total_fn + ex_fn, done_files + sum(1 for e in extras if e[2] == 'ok')))
    lines.append('## App binaries and raw images\n')
    lines.append('| target | functions | status |')
    lines.append('|---|---|---|')
    for label, n, st in extras:
        lines.append('| %s | %d | %s |' % (label, n, st))
    if failed:
        lines.append('\n## Failed exports (%d)\n' % len(failed))
        for f in failed:
            lines.append('* `%s`' % f)
    lines.append('\n## How this was produced\n')
    lines.append('Ghidra 12.1.3 headless (`analyzeHeadless`) with `ghidra_scripts/ExportDecomp.java`,\n'
                 'ARM 32-bit little-endian, image base from each ELF. Go binaries were additionally\n'
                 'renamed from GoReSym output (`RenameGo.java`) after fixing GoReSym\'s textStart\n'
                 'bug — see `decompiled/app/*/INDEX.md` and mod/recovered/METHOD.md.\n')
    lines.append('Caveats: this is C pseudocode produced by a decompiler, not the original source.\n'
                 'Structs and types are partly lost, C++ is shown with raw field offsets, and Go\n'
                 'uses `unaff_*`/`in_stack_*` artefacts. `kernel` and `uboot` were loaded as raw ARM\n'
                 'images at conventional bases (0x60008000 / 0x00200000) because they carry no symbol\n'
                 'table, so their function names are addresses only.\n')
    lines.append('Handling of the non-ELF targets:\n'
                 '* `uboot.bin` is LZMA-compressed inside the FIT image; decompressed with `xz -dc`,\n'
                 '  then disassembled from base 0x00200000 (the FIT load address).\n'
                 '* `kernel.bin` is an LZMA-compressed ARM Linux Image; it was converted to a\n'
                 '  symbolized ELF with `vmlinux-to-elf` (kallsyms recovery, base 0xb0008000), so the\n'
                 '  kernel output uses real function names instead of addresses.\n'
                 '* `firmware_v1.4.3_20260303.bin` (MCU) is linked for the OTA slot at 0x0800A000\n'
                 '  (`fw_ota_sector_offset: 20` x 2048 in printer.cfg), loaded as ARM Cortex-M.\n'
                 '* `resource.bin` is a Rockchip RSCE asset bundle (dtb/logos), not code.\n')
    lines.append('Resume an interrupted run with:\n')
    lines.append('```bash\npython scripts/decompile_all.py --shard 0/4   # repeat for 1/4 .. 3/4\n```\n')
    open(os.path.join(ROOT, 'README.md'), 'w', encoding='utf8').write('\n'.join(lines))

    idx = ['# INDEX — per-binary decompilation status\n',
           '| status | functions | size | binary |', '|---|---|---|---|']
    for path, size, typ, status, fn in sorted(rows, key=lambda r: -r[4]):
        idx.append('| %s | %d | %d KB | `%s` |' % (status, fn, size // 1024, path))
    open(os.path.join(ROOT, 'INDEX.md'), 'w', encoding='utf8').write('\n'.join(idx) + '\n')
    print('ELF: %d/%d decompiled, %d functions; extras %d/%d, %d functions; total %d'
          % (done_files, len(rows), total_fn, sum(1 for e in extras if e[2] == 'ok'),
             len(extras), ex_fn, total_fn + ex_fn))
    if failed:
        print('failed:', failed)


if __name__ == '__main__':
    main()
