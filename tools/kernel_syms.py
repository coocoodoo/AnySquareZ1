import struct
p = r'C:\Users\quant\Documents\Anycubic\ANYCUBICS1DECO\boot\kernel_vmlinux.elf'
d = open(p, 'rb').read()
sht = struct.unpack_from('<I', d, 0x20)[0]
es = struct.unpack_from('<H', d, 0x2e)[0]
n = struct.unpack_from('<H', d, 0x30)[0]
secs = []
for i in range(n):
    o = sht + i * es
    secs.append(struct.unpack_from('<10I', d, o))
sym = [s for s in secs if s[1] == 2][0]
strt = secs[sym[6]]
strdata = d[strt[4]:strt[4] + strt[5]]
cnt = sym[5] // sym[9]
print('symbols:', cnt)
shown = 0
for i in range(1, cnt):
    nameoff, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', d, sym[4] + i * sym[9])
    nm = strdata[nameoff:strdata.index(b'\0', nameoff)].decode(errors='replace')
    typ = info & 0xf
    if typ == 2 and shown < 12:
        print('  %-40s value=%#x size=%d shndx=%d' % (nm, value, size, shndx))
        shown += 1
