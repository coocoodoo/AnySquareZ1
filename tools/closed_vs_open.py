"""Write mod/recovered/CLOSED-VS-OPEN.md from re/source-map.json."""
import json, os, collections

ROOT = r'C:\Users\quant\Documents\Anycubic'
sm = json.load(open(os.path.join(ROOT, 're', 'source-map.json'), encoding='utf8'))
pk = json.load(open(os.path.join(ROOT, 'mod', 'recovered', 'gklib', 'packages.json'), encoding='utf8'))

missing = [f for f in sm['binary_only'] if not f.startswith('vendor/')]
bypkg = collections.defaultdict(list)
for f in missing:
    p, _, base = f.rpartition('/')
    bypkg[p].append(base)

L = ['# gklib: what is open, what is not', '',
     'Anycubic publishes [ANYCUBIC-3D/Klipper-go](https://github.com/ANYCUBIC-3D/Klipper-go),',
     'but the shipped 2.7.2.7 `gklib` was built from a newer, restructured tree',
     '(`internal/pkg/*` instead of `project/*`, module `k3c`, branch `refactor/s1cv2_clean`).', '',
     '| | count |', '|---|---|',
     '| non-vendor k3c source files in the shipped binary | %d |' % (len(missing) + len(sm['matched'])),
     '| present in the public repo (by filename) | %d |' % len(sm['matched']),
     '| **only in the binary — no public source** | **%d** |' % len(missing), '',
     '## Closed packages (function counts from the recovered Go symbol table)', '',
     '| package | files missing | recovered functions |', '|---|---|---|']

for p in sorted(bypkg):
    lo = p.replace('internal/pkg/', '').replace('internal/', '')
    n = 0
    for k, v in pk.items():
        if k.endswith(lo) or lo.endswith(k):
            n = max(n, len(v.get('functions', [])))
    L.append('| `%s` | %d | %d |' % (p, len(bypkg[p]), n))

L += ['', '## Open files that match the public tree', '']
for b, paths in sorted(sm['matched'])[:80]:
    L.append('* `%s` → public `%s`' % (b, paths[0]))

open(os.path.join(ROOT, 'mod', 'recovered', 'CLOSED-VS-OPEN.md'), 'w', encoding='utf8').write('\n'.join(L) + '\n')
print('wrote CLOSED-VS-OPEN.md —', len(missing), 'closed files,', len(bypkg), 'packages')
