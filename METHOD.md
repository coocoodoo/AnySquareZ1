# How the recovered source was produced

Everything here is reproducible on this machine (`C:\REA` has Ghidra 12.1.3, Go 1.24,
`GoReSym` in `%USERPROFILE%\go\bin`).

## 1. Unpack the firmware

```bash
python mod/tools/pack_swu.py --unpack KS1_2.7.2.7.swu --dest fw/2.7.2.7
```
The zip entry `update_swu/setup.tar.gz` is ZipCrypto-encrypted; the KS1 password is
`U2FsdGVkX1+lG6cHmshPLI/LaQr9cZCjA8HZt6Y8qmbB7riY` (read out of `channel.sh` in the
payload itself, and identical to what Rinkhals' build tooling uses).

## 2. Go symbol recovery

```bash
GoReSym -t -d -p fw/2.7.2.7/payload/app/gklib > re/gklib/gore.json
python scripts/gore_csv.py re/gklib/gore.json re/gklib/symbols.csv fw/2.7.2.7/payload/app/gklib
```

**Gotcha — GoReSym reports the wrong base on these binaries.** Its `TabMeta.VA` equals
the `.gopclntab` virtual address, and every `Start` is `pclntab_va + func_offset`
instead of `textStart + func_offset`. For gklib that is a constant −0x932f8c shift;
gkapi −0x873ad8. `scripts/gore_csv.py` fixes it by reading `textStart` from the
pclntab header (offset 16) and rebuilding every address. Sanity check afterwards:
~86 % of `k3c/*` functions must start with the Go/ARM stack-guard prologue
`e59a1008 e15d0001 9a…` (`ldr r1,[sb,#8]; cmp sp,r1; bls morestack`);
`scripts/check_mapping.py` does that.

Without the fix Ghidra creates 1-byte functions at bogus addresses and the exported C
is garbage — that is how the first attempt failed here.

## 3. Decompile with Ghidra

```bash
analyzeHeadless.bat ghproj kobra \
  -import fw/2.7.2.7/payload/app/gklib \
  -scriptPath ghidra_scripts \
  -postScript RenameGo.java re/gklib/symbols.csv re/decomp "k3c/" \
  > re/gklib/ghidra.log 2>&1
```
`RenameGo.java` (this repo) disassembles each recovered range, creates a function with
the exact GoReSym size, applies the Go name, then decompiles every function whose name
matches the filter. For the C/C++ targets use `ExportDecomp.java` (no names available,
but Qt/uClibc dynamic symbols give most of them):

```bash
analyzeHeadless.bat ghproj2 kobra2 -import fw/2.7.2.7/payload/app/K3SysUi \
  -scriptPath ghidra_scripts -postScript ExportDecomp.java re/decomp "-"
```

Then `python scripts/build_recovered.py` splits the single `.c` per binary into
per-namespace files and writes `packages.json` / `INDEX.md` here, and
`python scripts/overview.py` refreshes `OVERVIEW.md`.

## 4. Reading the output

* Go binaries: `k3c/...` and `printerApi/...` are real Go function names with receiver
  types (e.g. `k3c/internal/print.(*LeviQ3Helper).LEVIQ_auto_zoffset`), so the C body is
  meaningful even though locals are `iVar1`-style.
* The decompiler cannot recover Go structs/types; `re/gklib/gore.json` also contains
  `Types` and `Interfaces` recovered from the binary's type metadata if you need field
  layout.
* Decompiled C is reference material for patching or for re-implementing a closed
  package in Go — it is not a compilable tree.

## 5. Why not REA's own ELF path

REA 6.4.0 on Windows routes native targets to its Ghidra provider, which only admits PE
(`"Windows Ghidra P0 accepts PE targets only."`). Same engine, thinner wrapper. Running
REA under WSL/Linux with a Linux Ghidra install would let you use
`open_binary` / `procedure_pseudo_code` / `build_call_path` on these ARM ELFs directly.
