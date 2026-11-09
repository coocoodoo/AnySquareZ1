import json, os, collections

ROOT = r'C:\Users\quant\Documents\Anycubic'
REPO = os.path.join(ROOT, 'src', 'Klipper-go')


def load(binname):
    p = os.path.join(ROOT, 're', binname, 'gore.json')
    return json.load(open(p, encoding='utf8'))


def k3c_files(d):
    out = []
    for f in d.get('Files') or []:
        if '/k3c/' in f:
            out.append(f.split('/k3c/', 1)[1])
    return sorted(set(out))


def repo_files():
    s = set()
    for root, dirs, files in os.walk(REPO):
        rel = os.path.relpath(root, REPO).replace(os.sep, '/')
        if rel.split('/')[0] in ('.git', 'docs', 'rv1106-cross-compilation-toolchain'):
            continue
        for f in files:
            if f.endswith('.go'):
                s.add(f if rel == '.' else rel + '/' + f)
    return s


for binname in ('gklib', 'gkapi'):
    d = load(binname)
    files = k3c_files(d)
    funcs = collections.Counter()
    for fn in d.get('UserFunctions') or []:
        pn = fn.get('PackageName') or ''
        if pn.startswith('k3c/') or pn == 'main':
            funcs[pn] += 1
    print('=' * 70)
    print(binname, '| go', d.get('Version'), '| k3c source files', len(files),
          '| k3c funcs', sum(funcs.values()))
    pkgs = collections.Counter('/'.join(f.split('/')[:-1]) for f in files)
    for k, v in sorted(pkgs.items()):
        print(f'   {v:3d} files  {k}')
