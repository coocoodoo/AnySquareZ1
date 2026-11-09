import json, struct

BIN = r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\app\gklib'
GORE = r'C:\Users\quant\Documents\Anycubic\re\gklib\gore.json'
d = open(BIN, 'rb').read()
g = json.load(open(GORE, encoding='utf8'))
fns = g['UserFunctions'] + g['StdFunctions']

for f in fns:
    if 'rt0' in f['FullName'] or f['FullName'] in ('runtime.rt0_go', 'main.main', '_start'):
        print('%-40s %#x  size %d' % (f['FullName'], f['Start'], f['End'] - f['Start']))

print('\nfirst 12 by address:')
for f in sorted(fns, key=lambda x: x['Start'])[:12]:
    print('  %#010x  %s' % (f['Start'], f['FullName']))

# how many functions are in the plausible text window if we assume textStart = 0x947108?
mn = min(f['Start'] for f in fns)
mx = max(f['End'] for f in fns)
print('\nspan: %#x .. %#x  (size %#x)' % (mn, mx, mx - mn))
print('ELF .text: 0x14064 .. 0x727894 (size 0x713830)')
print('delta needed if textStart were .text start: %#x' % (0x14064 - mn))
