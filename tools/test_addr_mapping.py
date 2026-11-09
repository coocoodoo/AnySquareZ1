import json, struct, random

BIN = r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\app\gklib'
GORE = r'C:\Users\quant\Documents\Anycubic\re\gklib\gore.json'
TEXT_VA = 0x14064
PCLN = 0x947108

d = open(BIN, 'rb').read()
g = json.load(open(GORE, encoding='utf8'))


def vaddr(a):
    return TEXT_VA + (a - PCLN)


def word(v):
    return struct.unpack_from('<I', d, v - 0x10000)[0]


def looks_like_prologue(w):
    top = w >> 16
    if top in (0xe92d, 0xe52d, 0xe1a0):   # push/stmdb, str, mov
        return True
    if (w >> 24) in (0xea, 0xeb):          # b / bl
        return True
    if (w >> 20) == 0xe35:                 # cmp
        return True
    return False


fns = g['UserFunctions']
named = [f for f in fns if f['FullName'] in ('main.main', 'k3c/internal/print.NewLeviQ3Helper')]
for f in named:
    v = vaddr(f['Start'])
    print('%-46s gore=%#x -> vaddr=%#x  w0=%#010x w1=%#010x' %
          (f['FullName'], f['Start'], v, word(v), word(v + 4)))

ks = [f for f in fns if f['FullName'].startswith('k3c/')]
random.seed(1)
ok = 0
for f in random.sample(ks, 20):
    v = vaddr(f['Start'])
    w = word(v)
    p = looks_like_prologue(w)
    ok += p
    print('%-44s v=%#010x w0=%#010x %s' % (f['FullName'][4:48], v, w, 'PROLOGUE' if p else ''))
print('\nplausible: %d/20' % ok)

# also test the naive hypothesis (no shift) for comparison
print('\nnaive gore address as vaddr:')
for f in random.sample(ks, 5):
    v = f['Start']
    try:
        print('  %-40s %#x w0=%#010x' % (f['FullName'][4:44], v, word(v)))
    except Exception as e:
        print('  out of range', e)
