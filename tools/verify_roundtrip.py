import os, hashlib, sys

def snap(root):
    out = {}
    for dp, dn, fn in os.walk(root):
        for f in fn:
            p = os.path.join(dp, f)
            rel = os.path.relpath(p, root).replace('\\', '/')
            out[rel] = (os.path.getsize(p), hashlib.sha256(open(p, 'rb').read()).hexdigest())
    return out

a = snap(r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload')
chk = os.path.join(os.environ['LOCALAPPDATA'], 'Temp', 'repack_check')
b = snap(chk)
b = {k: v for k, v in b.items() if not k.startswith('update_swu/')}
print('original files        :', len(a))
print('round-tripped files   :', len(b))
only_a = sorted(set(a).difference(b))
only_b = sorted(set(b).difference(a))
common = set(a).intersection(b)
diff = [k for k in common if a[k] != b[k]]
print('missing after round-trip:', only_a or 'none')
print('extra   after round-trip:', only_b or 'none')
print('content diffs           :', diff or 'none')
print('VERDICT:', 'lossless round-trip' if not (only_a or only_b or diff) else 'MISMATCH')
