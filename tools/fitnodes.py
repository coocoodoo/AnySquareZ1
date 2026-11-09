import struct, sys, json
sys.path.insert(0, r'C:\Users\quant\Documents\Anycubic\scripts')
from fitdump import FDT

for img in (r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\boot.img',
            r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\uboot.img'):
    data = open(img, 'rb').read()
    f = FDT(data)
    print('=' * 70)
    print(img, 'total', f.total, 'file', len(data))
    for n in f.nodes:
        keys = {k: (len(v) if isinstance(v, bytes) else v) for k, v in n['props'].items()}
        desc = n['props'].get('description', b'').rstrip(b'\0').decode(errors='replace')
        print('%-28s %-40s %s' % (n['path'], desc[:38], {k: (v if not isinstance(v, bytes) else '<%d bytes>' % v) for k, v in keys.items()}))
