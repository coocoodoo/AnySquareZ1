"""Dump an ELF symbol table to addr,name,size CSV (RenameGo input)."""
import struct
import sys

p_in, p_out = sys.argv[1], sys.argv[2]
d = open(p_in, 'rb').read()
sht = struct.unpack_from('<I', d, 0x20)[0]
es = struct.unpack_from('<H', d, 0x2e)[0]
n = struct.unpack_from('<H', d, 0x30)[0]
secs = [struct.unpack_from('<10I', d, sht + i * es) for i in range(n)]
sym = next(s for s in secs if s[1] == 2)
strt = secs[sym[6]]
strdata = d[strt[4]:strt[4] + strt[5]]

best = {}
for i in range(1, sym[5] // sym[9]):
    nameoff, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', d, sym[4] + i * sym[9])
    if shndx == 0 or not value:
        continue
    if (info & 0xf) != 2:          # STT_FUNC only
        continue
    nm = strdata[nameoff:strdata.index(b'\0', nameoff)].decode(errors='replace')
    if not nm:
        continue
    if value not in best or len(nm) < len(best[value][0]):
        best[value] = (nm, size)

with open(p_out, 'w', encoding='utf8') as f:
    f.write('# addr,name,size\n')
    for a in sorted(best):
        nm, size = best[a]
        f.write('0x%x,%s,%d\n' % (a, nm, size))
print('wrote %s: %d function symbols' % (p_out, len(best)))
