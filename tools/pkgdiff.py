import re, os, json, sys

BIN = r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\app\gklib'
REPO = r'C:\Users\quant\Documents\Anycubic\src\Klipper-go'
OUT = r'C:\Users\quant\Documents\Anycubic\pkgdiff.json'

d = open(BIN, 'rb').read()
raw = set(m.decode() for m in re.findall(rb'k3c/[A-Za-z0-9_./\-]{2,80}', d))

pkgs = set()
for s in raw:
    head, _, tail = s.rpartition('/')
    if head and '.' in tail:      # package.Func / pkg.(*T).M
        pkgs.add(head)
    else:
        pkgs.add(s)

repo = set()
for root, dirs, files in os.walk(REPO):
    rel = os.path.relpath(root, REPO).replace(os.sep, '/')
    if rel == '.':
        rel = ''
    if rel.split('/')[0] in ('.git', 'rv1106-cross-compilation-toolchain', 'docs'):
        continue
    if any(f.endswith('.go') for f in files):
        repo.add('k3c' if rel == '' else 'k3c/' + rel)

bin_k3c = {p for p in pkgs if p.startswith('k3c') and len(p) > 3}
missing = sorted(p for p in bin_k3c if p not in repo)
print('binary k3c packages :', len(bin_k3c))
print('repo packages       :', len(repo))
print('in binary only      :', len(missing))
print()
for p in missing:
    print('  ', p)
json.dump({'bin': sorted(bin_k3c), 'repo': sorted(repo), 'missing': missing}, open(OUT, 'w'), indent=1)
