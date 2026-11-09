import lzma, struct, sys, os

def unlzma1(data, out):
    props = data[0]
    lc = props % 9
    lp = (props // 9) % 5
    pb = props // 45
    dict_size = struct.unpack_from('<I', data, 1)[0]
    comp = data[5:]
    dec = lzma.LZMADecompressor(format=lzma.FORMAT_RAW,
                               filters=[{'id': lzma.FILTER_LZMA1, 'dict_size': dict_size,
                                         'lc': lc, 'lp': lp, 'pb': pb}])
    raw = dec.decompress(comp)
    open(out, 'wb').write(raw)
    print('%s: props lc=%d lp=%d pb=%d dict=%d -> %d bytes -> %s' % (os.path.basename(out), lc, lp, pb, dict_size, len(raw), out))


if __name__ == '__main__':
    src, dst = sys.argv[1], sys.argv[2]
    unlzma1(open(src, 'rb').read(), dst)
