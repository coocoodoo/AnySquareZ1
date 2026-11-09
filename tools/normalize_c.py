#!/usr/bin/env python3
"""Drop 'decompile failed' placeholder sections whose function was recovered elsewhere
in the same binary directory (retries/asm land in whichever .c the merge picked)."""
import glob
import os
import re

DEC = r'C:\Users\quant\Documents\Anycubic\ANYCUBICS1DECO\decompiled'
HEADER = re.compile(r'^/\* ===== (.+?) @ ([0-9a-fA-F]+).*?===== \*/')
HEADER2 = re.compile(r'^/\* (.+?) @ ([0-9a-fA-F]+) \(size \d+\) \*/')
FAILED = re.compile(r'decompile failed|still failed|/\* failed|/\* part failed', re.I)


def sections(text):
    lines = text.splitlines(True)
    head, secs, cur = [], [], None
    for ln in lines:
        m = HEADER.match(ln) or HEADER2.match(ln)
        if m:
            if cur:
                secs.append(cur)
            cur = {'key': (m.group(1), m.group(2).lstrip('0').lower()), 'lines': [ln]}
        elif cur is not None:
            cur['lines'].append(ln)
        else:
            head.append(ln)
    if cur:
        secs.append(cur)
    return head, secs


def main():
    total_removed = 0
    for d in sorted({os.path.dirname(p) for p in glob.glob(os.path.join(DEC, '**', '*.c'), recursive=True)}):
        files = glob.glob(os.path.join(d, '*.c'))
        parsed = {}
        good = set()
        for p in files:
            head, secs = sections(open(p, encoding='utf8', errors='replace').read())
            parsed[p] = (head, secs)
            for s in secs:
                if not any(FAILED.search(l) for l in s['lines'][:4]):
                    good.add(s['key'])
        for p, (head, secs) in parsed.items():
            keep = [s for s in secs
                    if not (s['key'] in good and any(FAILED.search(l) for l in s['lines'][:4]))]
            removed = len(secs) - len(keep)
            if removed:
                total_removed += removed
                open(p, 'w', encoding='utf8').write(''.join(head) + ''.join(''.join(s['lines']) for s in keep))
    print('removed %d duplicate failed sections' % total_removed)


if __name__ == '__main__':
    main()
