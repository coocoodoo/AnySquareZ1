"""Fill in st_size for function symbols that have size 0, using the gap to the next
symbol. Ghidra needs real function extents, otherwise every kallsyms label becomes a
1-byte 'function'.

usage: python fix_sym_sizes.py <in.elf> <out.elf>
"""
import struct
import sys

p_in, p_out = sys.argv[1], sys.argv[2]
d = bytearray(open(p_in, 'rb').read())

sht = struct.unpack_from('<I', d, 0x20)[0]
es = struct.unpack_from('<H', d, 0x2e)[0]
n = struct.unpack_from('<H', d, 0x30)[0]
secs = [struct.unpack_from('<10I', d, sht + i * es) for i in range(n)]
sym = next(s for s in secs if s[1] == 2)
strt = secs[sym[6]]
strdata = bytes(d[strt[4]:strt[4] + strt[5]])
cnt = sym[5] // sym[9]

entries = []
for i in range(1, cnt):
    off = sym[4] + i * sym[9]
    nameoff, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', d, off)
    typ = info & 0xf
    entries.append((off, nameoff, value, size, typ, shndx))

funcs = sorted([e for e in entries if e[4] == 2 and e[5] != 0 and e[2]],
               key=lambda e: e[2])
addrs = [e[2] for e in funcs]
filled = 0
for i, e in enumerate(funcs):
    off, nameoff, value, size, typ, shndx = e
    if size:
        continue
    nxt = addrs[i + 1] if i + 1 < len(addrs) else None
    if nxt is None:
        continue
    new_size = nxt - value
    if 0 < new_size < 0x10000:
        struct.pack_into('<I', d, off + 8, new_size)
        filled += 1
open(p_out, 'wb').write(d)
print('function symbols: %d, sizes filled: %d -> %s' % (len(funcs), filled, p_out))
