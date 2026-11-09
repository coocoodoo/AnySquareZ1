#!/usr/bin/env python3
"""Build a cross-binary symbol index: SYMBOLS.csv + SYMBOLS.md (name -> file:line)."""
import csv
import os
import re
import time

ROOT = r'C:\Users\quant\Documents\Anycubic\ANYCUBICS1DECO'
DEC = os.path.join(ROOT, 'decompiled')

MARK_A = re.compile(r'^/\* ===== (.+?) @ (\w+) size=(\d+) ===== \*/')
MARK_B = re.compile(r'^/\* (.+?) @ (\w+) \(size (\d+)\) \*/')


def main():
    rows = []
    for base, dirs, files in os.walk(DEC):
        for fn in files:
            if not fn.endswith('.c'):
                continue
            p = os.path.join(base, fn)
            rel = os.path.relpath(p, ROOT).replace('\\', '/')
            with open(p, encoding='utf8', errors='replace') as f:
                for i, line in enumerate(f, 1):
                    m = MARK_A.match(line) or MARK_B.match(line)
                    if m:
                        rows.append((m.group(1), m.group(2), int(m.group(3)), rel, i))
    rows.sort(key=lambda r: (r[3], r[4]))
    with open(os.path.join(ROOT, 'SYMBOLS.csv'), 'w', newline='', encoding='utf8') as f:
        w = csv.writer(f)
        w.writerow(['function', 'address', 'size_bytes', 'file', 'line'])
        w.writerows(rows)
    print('%d functions indexed -> SYMBOLS.csv (%.1f MB)'
          % (len(rows), os.path.getsize(os.path.join(ROOT, 'SYMBOLS.csv')) / 1e6))

    # markdown: top files by function count
    from collections import Counter
    byfile = Counter(r[3] for r in rows)
    lines = ['# SYMBOLS — decompiled function index', '',
             'Generated %s. %d functions from %d files.' % (time.strftime('%Y-%m-%d %H:%M'), len(rows), len(byfile)), '',
             'Search `SYMBOLS.csv` for a name; open the file at the given line.', '',
             '| functions | file |', '|---|---|']
    for f, n in byfile.most_common(80):
        lines.append('| %d | `%s` |' % (n, f))
    open(os.path.join(ROOT, 'SYMBOLS.md'), 'w', encoding='utf8').write('\n'.join(lines) + '\n')


if __name__ == '__main__':
    main()
