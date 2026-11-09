# ANYCUBICS1DECO — decompiled Anycubic Kobra S1 firmware 2.7.2.7

Generated 2026-11-08 17:23

Source artifact: `KS1_2.7.2.7.swu` (md5 49b51f8fbee789c652161f30828d82c0)

## What is in here

```
rootfs/system/      SquashFS system.img   -> base OS, busybox, gdb, python, klipper bits
rootfs/oem/         SquashFS oem.img      -> Rockchip media libs, wifi drivers, kernel modules
rootfs/ac_lib/      ext4 ac_lib.img       -> Qt, ffmpeg, openssl, Anycubic runtime libs
boot/               FIT image            -> Linux kernel + fdt + resource
uboot/              FIT image            -> U-Boot (lzma) + dtb
decompiled/app/     gklib, gkapi, K3SysUi, engineMode (per-package .c + index.csv)
decompiled/extras/  gkcam, libc_helper, logmain, kernel, uboot
decompiled/<image>/ every other ELF found in the rootfs trees, one directory each
inventory.json      every ELF with arch/type/size
INDEX.md            per-binary function counts and status
```

## Coverage

| image | ELFs | decompiled | functions | size |
|---|---|---|---|---|
| ac_lib | 97 | 97 | 114748 | 52.2 MB |
| oem | 135 | 135 | 68949 | 24.9 MB |
| system | 56 | 56 | 49879 | 13.9 MB |
| **ELF total** | **288** | **288** | **233576** | **90.9 MB** |
| app binaries + raw images | 9 | 9 | 79070 | — |

**Grand total: 312646 decompiled functions** across 297 binaries.

## App binaries and raw images

| target | functions | status |
|---|---|---|
| gklib | 3875 | ok |
| gkapi | 1658 | ok |
| K3SysUi | 19899 | ok |
| engineMode | 2809 | ok |
| gkcam | 3703 | ok |
| libc_helper | 274 | ok |
| logmain | 1778 | ok |
| kernel | 35308 | ok |
| uboot | 9766 | ok |

## How this was produced

Ghidra 12.1.3 headless (`analyzeHeadless`) with `ghidra_scripts/ExportDecomp.java`,
ARM 32-bit little-endian, image base from each ELF. Go binaries were additionally
renamed from GoReSym output (`RenameGo.java`) after fixing GoReSym's textStart
bug — see `decompiled/app/*/INDEX.md` and mod/recovered/METHOD.md.

Caveats: this is C pseudocode produced by a decompiler, not the original source.
Structs and types are partly lost, C++ is shown with raw field offsets, and Go
uses `unaff_*`/`in_stack_*` artefacts. `kernel` and `uboot` were loaded as raw ARM
images at conventional bases (0x60008000 / 0x00200000) because they carry no symbol
table, so their function names are addresses only.

Handling of the non-ELF targets:
* `uboot.bin` is LZMA-compressed inside the FIT image; decompressed with `xz -dc`,
  then disassembled from base 0x00200000 (the FIT load address).
* `kernel.bin` is an LZMA-compressed ARM Linux Image; it was converted to a
  symbolized ELF with `vmlinux-to-elf` (kallsyms recovery, base 0xb0008000), so the
  kernel output uses real function names instead of addresses.
* `firmware_v1.4.3_20260303.bin` (MCU) is linked for the OTA slot at 0x0800A000
  (`fw_ota_sector_offset: 20` x 2048 in printer.cfg), loaded as ARM Cortex-M.
* `resource.bin` is a Rockchip RSCE asset bundle (dtb/logos), not code.

Resume an interrupted run with:

```bash
python scripts/decompile_all.py --shard 0/4   # repeat for 1/4 .. 3/4
```
