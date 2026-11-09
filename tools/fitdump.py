"""Minimal FDT/FIT parser: list images and extract their payloads."""
import struct, sys, os, json


class FDT:
    def __init__(self, data):
        self.d = data
        magic, totalsize, off_struct, off_strings, off_rsv, version, lastcomp, bootcpu, size_strings, size_struct = \
            struct.unpack_from('>10I', data, 0)
        assert magic == 0xd00dfeed, hex(magic)
        self.total = totalsize
        self.struct_off = off_struct
        self.strings = data[off_strings:off_strings + size_strings]
        self.nodes = self._parse()

    def _name(self, off):
        end = self.strings.index(b'\0', off)
        return self.strings[off:end].decode()

    def _parse(self):
        d = self.d
        off = self.struct_off
        nodes, stack = [], []
        while off < self.total:
            tok = struct.unpack_from('>I', d, off)[0]
            off += 4
            if tok == 1:                      # FDT_BEGIN_NODE
                end = d.index(b'\0', off)
                name = d[off:end].decode(errors='replace')
                off = (end + 4) & ~3
                node = {'name': name or '/', 'props': {}, 'path': ''}
                if stack:
                    node['path'] = stack[-1]['path'].rstrip('/') + '/' + node['name']
                else:
                    node['path'] = '/'
                stack.append(node)
                nodes.append(node)
            elif tok == 2:                    # FDT_END_NODE
                if stack:
                    stack.pop()
            elif tok == 3:                    # FDT_PROP
                ln, nameoff = struct.unpack_from('>II', d, off)
                off += 8
                val = d[off:off + ln]
                off = (off + ln + 3) & ~3
                if stack:
                    stack[-1]['props'][self._name(nameoff)] = val
            elif tok == 4:                    # FDT_NOP
                continue
            elif tok == 9:                    # FDT_END
                break
            else:
                raise SystemExit('bad token %d at %#x' % (tok, off - 4))
        return nodes


def main(img, outdir):
    data = open(img, 'rb').read()
    f = FDT(data)
    os.makedirs(outdir, exist_ok=True)
    manifest = []
    for n in f.nodes:
        p = n['props']
        if ('data-offset' in p or 'data-position' in p) and 'data-size' in p:
            offkey = 'data-offset' if 'data-offset' in p else 'data-position'
            off = struct.unpack('>I', p[offkey])[0]
            size = struct.unpack('>I', p['data-size'])[0]
            name = n['name']
            fn = os.path.join(outdir, name + '.bin')
            open(fn, 'wb').write(data[off:off + size])
            manifest.append({'node': name, 'type': p.get('type', b'').rstrip(b'\0').decode(errors='replace'),
                             'compression': p.get('compression', b'').rstrip(b'\0').decode(errors='replace'),
                             'offset': off, 'size': size, 'file': os.path.basename(fn)})
            print('%-24s type=%-14s comp=%-8s %10d bytes -> %s' % (
                name, manifest[-1]['type'], manifest[-1]['compression'], size, os.path.basename(fn)))
        if 'description' in p:
            print('  description:', p['description'].rstrip(b'\0').decode(errors='replace'))
    json.dump(manifest, open(os.path.join(outdir, 'FIT-MANIFEST.json'), 'w'), indent=1)
    print('\nnodes:', len(f.nodes), 'images:', len(manifest))


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
