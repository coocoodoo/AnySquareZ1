#!/usr/bin/env python3
"""Decompile every ELF in ANYCUBICS1DECO/inventory.json with Ghidra headless.

Resumable: skips binaries whose output index already exists. Shardable so several
processes can run at once:

    python decompile_all.py --shard 0/3
    python decompile_all.py --shard 1/3
    python decompile_all.py --shard 2/3
"""
import argparse
import json
import os
import re
import subprocess
import sys
import time

ROOT = r'C:\Users\quant\Documents\Anycubic\ANYCUBICS1DECO'
GHIDRA = r'C:\REA\tools\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
SCRIPTS = r'C:\Users\quant\Documents\Anycubic\ghidra_scripts'
PROJ = os.path.join(ROOT, '_ghidra_projects')
DEC = os.path.join(ROOT, 'decompiled')
LOG = os.path.join(ROOT, 'decompile.log')


def flat(rel):
    return re.sub(r'[^A-Za-z0-9._-]+', '__', rel)


def done_marker(outdir):
    return os.path.exists(os.path.join(outdir, 'index.csv')) or \
           os.path.exists(os.path.join(outdir, 'EXPORT.FAILED'))


def run_one(item, idx, shard_tag):
    rel = item['path']
    outdir = os.path.join(DEC, flat(rel))
    if done_marker(outdir):
        return 'skip'
    os.makedirs(outdir, exist_ok=True)
    src = os.path.join(ROOT, rel)
    proj = os.path.join(PROJ, 'p%s_%04d' % (shard_tag, idx))
    os.makedirs(proj, exist_ok=True)
    cmd = [GHIDRA, proj, 'b%s%04d' % (shard_tag, idx), '-import', src,
           '-scriptPath', SCRIPTS,
           '-postScript', 'ExportDecomp.java', outdir, '-',
           '-deleteProject']
    t0 = time.time()
    with open(LOG, 'a', encoding='utf8') as log:
        log.write('\n=== [%s] %s (%d bytes)\n' % (time.strftime('%H:%M:%S'), rel, item['size']))
    r = subprocess.run(cmd, capture_output=True, text=True, errors='replace')
    dt = time.time() - t0
    with open(LOG, 'a', encoding='utf8') as log:
        log.write('    exit=%s %.1fs\n' % (r.returncode, dt))
        for line in (r.stdout or '').splitlines():
            if 'DONE' in line or 'names:' in line or 'ERROR' in line:
                log.write('    ' + line.strip() + '\n')
    cfile = [f for f in os.listdir(outdir) if f.endswith('.c')]
    if not cfile:
        open(os.path.join(outdir, 'EXPORT.FAILED'), 'w').write((r.stdout or '')[-4000:])
        return 'fail'
    # give the single .c a stable name
    src_c = os.path.join(outdir, cfile[0])
    want = os.path.join(outdir, os.path.basename(rel) + '.c')
    if src_c != want and not os.path.exists(want):
        os.replace(src_c, want)
    idxcsv = [f for f in os.listdir(outdir) if f.endswith('.index.csv')]
    if idxcsv and idxcsv[0] != 'index.csv':
        os.replace(os.path.join(outdir, idxcsv[0]), os.path.join(outdir, 'index.csv'))
    return 'ok'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--shard', default='0/1')
    ap.add_argument('--limit', type=int, default=0)
    a = ap.parse_args()
    k, n = (int(x) for x in a.shard.split('/'))
    items = json.load(open(os.path.join(ROOT, 'inventory.json'), encoding='utf8'))
    items.sort(key=lambda x: -x['size'])
    mine = [it for i, it in enumerate(items) if i % n == k]
    shard_tag = '%d%d' % (k, n)
    os.makedirs(DEC, exist_ok=True)
    stats = {'ok': 0, 'fail': 0, 'skip': 0}
    for i, it in enumerate(mine):
        if a.limit and i >= a.limit:
            break
        res = run_one(it, i, shard_tag)
        stats[res] += 1
        print('[%d/%d] %-6s %8d %s' % (i + 1, len(mine), res, it['size'], it['path']), flush=True)
    print('shard %s done: %s' % (a.shard, stats), flush=True)


if __name__ == '__main__':
    main()
