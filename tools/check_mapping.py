import json, struct, random

BIN = r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\app\gklib'
CSV = r'C:\Users\quant\Documents\Anycubic\re\gklib\symbols.csv'
d = open(BIN, 'rb').read()


def word(v):
    return struct.unpack_from('<I', d, v - 0x10000)[0]


def prologue(w):
    # Go/ARM stack-guard prologue: ldr r1, [sb, #8]; cmp sp, r1; bls morestack
    return w == 0xe59a1008


rows = []
for line in open(CSV, encoding='utf8'):
    if line.startswith('#'):
        continue
    a, rest = line.strip().split(',', 1)
    n, s = rest.rsplit(',', 1)
    rows.append((int(a, 16), n, int(s)))

ks = [r for r in rows if r[1].startswith('k3c/')]
ok = 0
for a, n, s in ks:
    if prologue(word(a)):
        ok += 1
print('k3c functions: %d, plausible ARM prologue: %d (%.1f%%)' % (len(ks), ok, 100.0 * ok / len(ks)))

random.seed(2)
for a, n, s in random.sample(ks, 8):
    print('  %#010x size=%-5d w0=%#010x  %s' % (a, s, word(a), n))
