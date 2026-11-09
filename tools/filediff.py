import json, os, collections

ROOT = r'C:\Users\quant\Documents\Anycubic'
REPO = os.path.join(ROOT, 'src', 'Klipper-go')


def k3c_files(binname):
    d = json.load(open(os.path.join(ROOT, 're', binname, 'gore.json'), encoding='utf8'))
    out = set()
    for f in d.get('Files') or []:
        if '/k3c/' in f:
            out.add(f.split('/k3c/', 1)[1])
    return out, d


def repo_files():
    s = {}
    for root, dirs, files in os.walk(REPO):
        rel = os.path.relpath(root, REPO).replace(os.sep, '/')
        if rel.split('/')[0] in ('.git', 'docs', 'rv1106-cross-compilation-toolchain'):
            continue
        for f in files:
            if f.endswith('.go'):
                p = f if rel == '.' else rel + '/' + f
                s.setdefault(f, []).append(p)
    return s


bin_g, dg = k3c_files('gklib')
bin_g = {f for f in bin_g if not f.startswith('vendor/')}
rep = repo_files()

same, missing = [], []
for f in sorted(bin_g):
    base = os.path.basename(f)
    if base in rep:
        same.append((f, rep[base]))
    else:
        missing.append(f)

print('gklib non-vendor k3c source files :', len(bin_g))
print('matched by filename in public repo:', len(same))
print('binary-only (no public source)    :', len(missing))
print()
print('--- binary-only files by package ---')
bypkg = collections.defaultdict(list)
for f in missing:
    bypkg['/'.join(f.split('/')[:-1])].append(os.path.basename(f))
for p in sorted(bypkg):
    print(f'{p}  ({len(bypkg[p])})')
    print('    ' + ', '.join(sorted(bypkg[p])))

print()
print('--- gkapi packages ---')
da = json.load(open(os.path.join(ROOT, 're', 'gkapi', 'gore.json'), encoding='utf8'))
cnt = collections.Counter()
for fn in da.get('UserFunctions') or []:
    pn = fn.get('PackageName') or ''
    top = '/'.join(pn.split('/')[:2])
    cnt[top] += 1
for k, v in cnt.most_common(20):
    print(f'  {v:5d}  {k}')

out = os.path.join(ROOT, 're', 'source-map.json')
json.dump({'binary_only': missing, 'matched': same}, open(out, 'w'), indent=1)
print('\nwrote', out)
