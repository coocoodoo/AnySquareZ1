"""Inventory every ELF / code-bearing file under ANYCUBICS1DECO."""
import os, struct, json, sys

ROOT = r'C:\Users\quant\Documents\Anycubic\ANYCUBICS1DECO'
OUT = os.path.join(ROOT, 'inventory.json')

MACH = {3: 'x86', 8: 'MIPS', 20: 'PPC', 40: 'ARM', 62: 'x86-64', 183: 'AArch64', 243: 'RISC-V'}
ETYPE = {1: 'REL', 2: 'EXEC', 3: 'DYN', 4: 'CORE'}


def elf_info(path):
    with open(path, 'rb') as f:
        h = f.read(64)
    if len(h) < 52 or h[:4] != b'\x7fELF':
        return None
    cls = h[4]
    end = '<' if h[5] == 1 else '>'
    etype = struct.unpack_from(end + 'H', h, 16)[0]
    machine = struct.unpack_from(end + 'H', h, 18)[0]
    is64 = cls == 2
    return {'class': 'ELF64' if is64 else 'ELF32', 'type': ETYPE.get(etype, etype),
            'machine': MACH.get(machine, machine), 'bits': 64 if is64 else 32}


def main():
    items = []
    for base, dirs, files in os.walk(ROOT):
        if 'decompiled' in base or 'rootfs_tar' in base:
            continue
        for fn in files:
            p = os.path.join(base, fn)
            try:
                info = elf_info(p)
            except Exception:
                continue
            if info:
                info['size'] = os.path.getsize(p)
                info['path'] = os.path.relpath(p, ROOT).replace('\\', '/')
                items.append(info)
    items.sort(key=lambda x: -x['size'])
    total = sum(i['size'] for i in items)
    print('%d ELF files, %.1f MB total' % (len(items), total / 1e6))
    from collections import Counter
    print(Counter((i['machine'], i['type']) for i in items).most_common())
    for i in items[:25]:
        print('  %9d  %-7s %-5s %-5s %s' % (i['size'], i['machine'], i['bits'], i['type'], i['path']))
    json.dump(items, open(OUT, 'w'), indent=1)
    print('\nwrote', OUT)


if __name__ == '__main__':
    main()
