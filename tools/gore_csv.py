"""Convert GoReSym JSON into addr,name,size CSV with *correct* virtual addresses.

GoReSym resolves the pclntab but reports function addresses relative to the
pclntab's own VA instead of the pclntab header's `textStart` (it happens on these
Anycubic Go 1.23 ARM builds).  We read `textStart` straight out of the pclntab
header and shift every recovered address by (textStart - pclntab_va).

usage: python gore_csv.py <gore.json> <symbols.csv> <binary>
"""
import json
import struct
import sys


def sections(data):
    e_shoff = struct.unpack_from('<I', data, 0x20)[0]
    e_shentsize = struct.unpack_from('<H', data, 0x2e)[0]
    e_shnum = struct.unpack_from('<H', data, 0x30)[0]
    e_shstrndx = struct.unpack_from('<H', data, 0x32)[0]
    shstr = struct.unpack_from('<6I', data, e_shoff + e_shstrndx * e_shentsize)[4]

    def name(off):
        end = data.index(b'\0', shstr + off)
        return data[shstr + off:end].decode()

    out = {}
    for i in range(e_shnum):
        o = e_shoff + i * e_shentsize
        sh_name, sh_type, sh_flags, sh_addr, sh_offset, sh_size = struct.unpack_from('<6I', data, o)
        out[name(sh_name)] = (sh_addr, sh_offset, sh_size)
    return out


def text_start(data, secs):
    addr, off, size = secs['.gopclntab']
    magic = struct.unpack_from('<I', data, off)[0]
    if magic in (0xFFFFFFFA, 0xFFFFFFF0, 0xFFFFFFF1):
        # pre-1.18 (FA) tables already store absolute function entries -> no shift
        if magic == 0xFFFFFFFA:
            return addr, addr
    if magic not in (0xFFFFFFF0, 0xFFFFFFF1):
        raise SystemExit('unexpected pclntab magic %#x' % magic)
    return struct.unpack_from('<I', data, off + 16)[0], addr


def main():
    src, dst, binary = sys.argv[1], sys.argv[2], sys.argv[3]
    data = open(binary, 'rb').read()
    secs = sections(data)
    tstart, pcln_va = text_start(data, secs)
    delta = tstart - pcln_va

    d = json.load(open(src, encoding='utf8'))
    best = {}
    for fn in d.get('UserFunctions') or []:
        n = fn.get('FullName')
        if not n:
            continue
        a = fn['Start'] + delta
        size = max(1, fn['End'] - fn['Start'])
        if a not in best or len(n) < len(best[a][0]):
            best[a] = (n, size)
    with open(dst, 'w', encoding='utf8') as f:
        f.write('# addr,name,size  (delta %#x, textStart %#x)\n' % (delta, tstart))
        for a in sorted(best):
            n, size = best[a]
            f.write('0x%x,%s,%d\n' % (a, n, size))
    print('%s: textStart=%#x pclntab_va=%#x delta=%#x symbols=%d'
          % (binary.rsplit('\\', 1)[-1], tstart, pcln_va, delta, len(best)))


if __name__ == '__main__':
    main()
