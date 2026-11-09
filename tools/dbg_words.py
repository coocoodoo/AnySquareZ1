import struct
BIN = r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\app\gklib'
d = open(BIN, 'rb').read()
print('file size', len(d))

def dump(v, n=4):
    off = v - 0x10000
    return ' '.join('%08x' % struct.unpack_from('<I', d, off + 4 * i)[0] for i in range(n))

for v in (0x14064, 0x1417c, 0x18310, 0x6f0e74, 0x6e558c, 0x441260, 0x4558c, 0x727894):
    print('%#010x off=%#x  %s' % (v, v - 0x10000, dump(v)))
