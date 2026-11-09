"""Write mod/recovered/OVERVIEW.md from the recovery artifacts."""
import json, os, collections, re

ROOT = r'C:\Users\quant\Documents\Anycubic'
REC = os.path.join(ROOT, 'mod', 'recovered')
DEC = os.path.join(ROOT, 're', 'decomp')

BINARIES = {
    'gklib': ('GoKlipper — motion, toolhead, heaters, MCU, ACE filament hub, print jobs', 'Go 1.23.11 (k3c)'),
    'gkapi': ('local HTTP/RPC + MQTT + cloud + OTA service', 'Go 1.23.0 (printerApi)'),
    'K3SysUi': ('touch UI (Qt/LVGL widgets)', 'C++ / Qt'),
    'engineMode': ('service-mode Qt utility', 'C++ / Qt'),
}

lines = ['# Recovered source map — Kobra S1 firmware 2.7.2.7', '',
         'Function names for the Go binaries were recovered from the pclntab with GoReSym;',
         'the C is Ghidra 12.1.3 decompiler output (ARM32 LE, image base 0x10000).',
         'Pseudocode, not compilable source — variable names are inferred (`iVar1`, `uVar2`).', '']

for b, (desc, lang) in BINARIES.items():
    pk = os.path.join(REC, b, 'packages.json')
    cfile = os.path.join(DEC, b + '.c')
    idx = os.path.join(DEC, b + '.index.csv')
    lines.append('## %s — %s' % (b, desc))
    lines.append('')
    lines.append('* language: %s' % lang)
    if os.path.exists(cfile):
        lines.append('* decompiled C: `%s` (%.1f MB), `%s`' % (
            os.path.relpath(cfile, ROOT).replace('\\', '/'),
            os.path.getsize(cfile) / 1e6,
            os.path.basename(idx)))
    if os.path.exists(pk):
        d = json.load(open(pk, encoding='utf8'))
        nfun = sum(len(v['functions']) for v in d.values())
        nfile = sum(len(v['files']) for v in d.values())
        lines.append('* recovered names: **%d functions** in %d namespaces, %d source file paths' % (nfun, len(d), nfile))
        top = sorted(((k, len(v['functions']), len(v['files'])) for k, v in d.items()),
                     key=lambda x: -x[1])[:12]
        lines.append('')
        lines.append('| namespace | functions | files |')
        lines.append('|---|---|---|')
        for k, f, fl in top:
            lines.append('| `%s` | %d | %d |' % (k, f, fl))
    lines.append('')

lines += ['## Regenerate', '',
          '```bash',
          '# names',
          'GoReSym -t -d -p <binary> > re/<bin>/gore.json',
          'python scripts/gore_csv.py re/<bin>/gore.json re/<bin>/symbols.csv',
          '# decompile (Ghidra headless, run from C:\\Users\\quant\\Documents\\Anycubic)',
          'analyzeHeadless.bat ghproj kobra -import <binary> -scriptPath ghidra_scripts \\',
          '  -postScript RenameGo.java re/<bin>/symbols.csv re/decomp "k3c/" -deleteProject',
          'python scripts/build_recovered.py',
          '```']

open(os.path.join(REC, 'OVERVIEW.md'), 'w', encoding='utf8').write('\n'.join(lines) + '\n')
print('wrote', os.path.join(REC, 'OVERVIEW.md'))
