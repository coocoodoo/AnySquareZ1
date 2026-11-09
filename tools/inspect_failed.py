import struct

BIN = r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\app\gkcam'
d = open(BIN, 'rb').read()

# ELF sections
sht = struct.unpack_from('<I', d, 0x20)[0]
es = struct.unpack_from('<H', d, 0x2e)[0]
n = struct.unpack_from('<H', d, 0x30)[0]
si = struct.unpack_from('<H', d, 0x32)[0]
shstr = struct.unpack_from('<6I', d, sht + si * es)[4]


def nm(o):
    e = d.index(b'\0', shstr + o)
    return d[shstr + o:e].decode()


secs = []
for i in range(n):
    o = sht + i * es
    name, typ, fl, addr, off, size = struct.unpack_from('<6I', d, o)
    secs.append((nm(name), typ, fl, addr, off, size))

print('sections of interest:')
for s in secs:
    if s[0] in ('.text', '.rodata', '.data', '.ARM.exidx'):
        print('  %-12s addr=%#x size=%#x' % (s[0], s[3], s[5]))

for target in (0xa4534, 0x13cde0):
    print('\ntarget %#x:' % target)
    for s in secs:
        if s[3] <= target < s[3] + s[5] and s[1] == 1:
            off = target - s[3] + s[4]
            words = struct.unpack_from('<8I', d, off)
            print('  in %s at file %#x' % (s[0], off))
            print('  words:', [hex(w) for w in words])
            # count how many of the next 256 words look like ARM data vs code
            sample = struct.unpack_from('<64I', d, off)
            pat = sum(1 for w in sample if (w >> 24) == 0xe5 or (w >> 24) == 0xe1)
            print('  next 64 words with LDR/MOV opcode top byte: %d/64' % pat)
