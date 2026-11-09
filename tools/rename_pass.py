"""Rewrite FUN_<addr> identifiers in a decompiled .c (and its index.csv) using the
symbol table of the source ELF. Used for the kernel, where vmlinux-to-elf recovers
35,982 kallsyms entries but Ghidra keeps its own FUN_ names.

usage: python rename_pass.py <elf> <file.c> <index.csv>
"""
import re
import struct
import sys


def elf_symbols(path):
    d = open(path, 'rb').read()
    sht = struct.unpack_from('<I', d, 0x20)[0]
    es = struct.unpack_from('<H', d, 0x2e)[0]
    n = struct.unpack_from('<H', d, 0x30)[0]
    secs = [struct.unpack_from('<10I', d, sht + i * es) for i in range(n)]
    sym = next(s for s in secs if s[1] == 2)
    strt = secs[sym[6]]
    strdata = d[strt[4]:strt[4] + strt[5]]
    out = {}
    for i in range(1, sym[5] // sym[9]):
        nameoff, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', d, sym[4] + i * sym[9])
        if shndx == 0:
            continue
        nm = strdata[nameoff:strdata.index(b'\0', nameoff)].decode(errors='replace')
        if not nm:
            continue
        typ = info & 0xf
        # prefer real function symbols over labels for the same address
        if value not in out or (typ == 2 and out[value][1] != 2):
            out[value] = (nm, typ)
    return {a: v[0] for a, v in out.items()}


def main():
    elf, cfile, idxfile = sys.argv[1:4]
    syms = elf_symbols(elf)
    print('symbols:', len(syms))

    txt = open(cfile, encoding='utf8', errors='replace').read()
    hits = set(re.findall(r'FUN_([0-9a-f]{8})', txt))
    mapping = {}
    for h in hits:
        a = int(h, 16)
        if a in syms:
            mapping['FUN_' + h] = syms[a]
    print('FUN_ identifiers in C: %d, resolvable: %d' % (len(hits), len(mapping)))
    for old, new in sorted(mapping.items(), key=lambda kv: -len(kv[0])):
        txt = txt.replace(old, new)
    open(cfile, 'w', encoding='utf8').write(txt)

    rows = open(idxfile, encoding='utf8', errors='replace').read().splitlines()
    fixed = [rows[0]]
    n = 0
    for r in rows[1:]:
        parts = r.split(',')
        if parts and parts[0].startswith('FUN_'):
            a = int(parts[0][4:], 16)
            if a in syms:
                parts[0] = syms[a]
                n += 1
        fixed.append(','.join(parts))
    open(idxfile, 'w', encoding='utf8').write('\n'.join(fixed) + '\n')
    print('index rows renamed:', n)


if __name__ == '__main__':
    main()
