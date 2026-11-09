"""Assemble mod/recovered from the REA/GoReSym/Ghidra artifacts in ../re."""
import json, os, re, shutil, collections

ROOT = r'C:\Users\quant\Documents\Anycubic'
RE = os.path.join(ROOT, 're')
OUT = os.path.join(ROOT, 'mod', 'recovered')


def load_gore(name):
    p = os.path.join(RE, name, 'gore.json')
    return json.load(open(p, encoding='utf8')) if os.path.exists(p) else None


def recover_go(name, outdir):
    d = load_gore(name)
    if not d:
        print(name, ': no gore.json, skipped')
        return
    os.makedirs(outdir, exist_ok=True)
    files = sorted({f.split('/k3c/', 1)[1] for f in (d.get('Files') or []) if '/k3c/' in f})
    open(os.path.join(outdir, 'source-files.txt'), 'w', encoding='utf8').write('\n'.join(files) + '\n')
    pkgs = collections.defaultdict(lambda: {'files': [], 'funcs': []})
    for f in files:
        if f.startswith('vendor/'):
            continue
        pkgs['/'.join(f.split('/')[:-1]) or '.']['files'].append(os.path.basename(f))
    for fn in d.get('UserFunctions') or []:
        p = fn.get('PackageName') or ''
        if not (p.startswith('k3c') or p.startswith('printerApi')):
            continue
        key = p
        if key.startswith('k3c'):
            key = key[3:]
        key = key.lstrip('/') or '.'
        pkgs[key]['funcs'].append(
            {'name': fn['FullName'], 'addr': hex(fn['Start']), 'size': fn['End'] - fn['Start']})
    data = {k: {'files': sorted(v['files']), 'functions': sorted(v['funcs'], key=lambda x: x['addr'])}
            for k, v in sorted(pkgs.items()) if v['files'] or v['funcs']}
    json.dump(data, open(os.path.join(outdir, 'packages.json'), 'w', encoding='utf8'), indent=1)
    npath = os.path.join(RE, name, 'symbols.csv')
    if os.path.exists(npath):
        shutil.copy2(npath, os.path.join(outdir, 'symbols.csv'))
    tot = sum(len(v['functions']) for v in data.values())
    print('%-9s files=%d packages=%d functions=%d' % (name, len(files), len(data), tot))


def split_c(binname, outdir):
    src = os.path.join(RE, 'decomp', binname + '.c')
    if not os.path.exists(src):
        return
    os.makedirs(outdir, exist_ok=True)
    pk = os.path.join(outdir, 'packages.json')
    known = sorted(json.load(open(pk, encoding='utf8')).keys(), key=len, reverse=True) if os.path.exists(pk) else []
    prefixes = []
    for k in known:
        if k.startswith('internal/'):
            prefixes.append('k3c/' + k)
        elif k.startswith('printerApi'):
            prefixes.append(k)
        elif k not in ('.',):
            prefixes.append('k3c/' + k)
    prefixes = sorted(set(prefixes), key=len, reverse=True)
    txt = open(src, encoding='utf8', errors='replace').read()
    parts = re.split(r'/\* ===== (.+?) @ (\w+) size=(\d+) ===== \*/', txt)
    head = parts[0]
    buckets = collections.defaultdict(list)
    for i in range(1, len(parts) - 2, 4):
        name, addr, size, body = parts[i], parts[i + 1], parts[i + 2], parts[i + 3]
        pkg = 'other'
        for p in prefixes:
            if name.startswith(p + '.') or name.startswith(p + '/') or name == p:
                pkg = p
                break
        buckets[pkg].append('/* %s @ %s (size %s) */%s' % (name, addr, size, body))
    idx = []
    for pkg, chunks in buckets.items():
        safe = re.sub(r'[^A-Za-z0-9_.\-]+', '_', pkg)
        p = os.path.join(outdir, safe + '.c')
        with open(p, 'w', encoding='utf8') as f:
            f.write(head.split('// arch')[0])
            f.write('// binary: %s   package: %s   functions: %d\n' % (binname, pkg, len(chunks)))
            f.writelines(chunks)
        idx.append((pkg, len(chunks), os.path.basename(p)))
    with open(os.path.join(outdir, 'INDEX.md'), 'w', encoding='utf8') as f:
        f.write('# %s — decompiled C by package\n\n| package | functions | file |\n|---|---|---|\n' % binname)
        for pkg, n, fn in sorted(idx, key=lambda x: -x[1]):
            f.write('| `%s` | %d | %s |\n' % (pkg, n, fn))
    print('%-9s decompiled packages=%d -> %s' % (binname, len(idx), outdir))


if __name__ == '__main__':
    os.makedirs(OUT, exist_ok=True)
    for gobin in ('gklib', 'gkapi'):
        recover_go(gobin, os.path.join(OUT, gobin))
    for cbin in ('K3SysUi', 'engineMode', 'gklib', 'gkapi'):
        split_c(cbin, os.path.join(OUT, cbin))
