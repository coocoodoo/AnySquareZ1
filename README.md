# Anycubic Kobra S1 — decompiled firmware 2.7.2.7

Decompiled source of the Anycubic Kobra S1 (model code `KS1`) application firmware,
recovered from the stock update package `KS1_2.7.2.7.swu`
(md5 `49b51f8fbee789c652161f30828d82c0`).

**313,166 functions across 297 binaries — 313,159 as C, 7 as annotated ARM listings, 0 failures.**

> Read [DISCLAIMER.md](DISCLAIMER.md) first. This code is Anycubic's property, not open
> source, and it is decompiler output — not recompilable source.

## What is in here

```
decompiled/app/        gklib, gkapi, K3SysUi, engineMode   (Go + Qt C++)
decompiled/extras/     gkcam, libc_helper, logmain, uboot, mcu, kernel
decompiled/rootfs__*/  every ELF found in system.img, oem.img and ac_lib.img, one dir each
source/                plaintext originals shipped in the firmware: printer.cfg,
                       installer scripts, translations, sample gcodes
COVERAGE.md            coverage table per image and caveats
INDEX.md               per-binary function counts and status
SYMBOLS.csv            name → file:line index for all 313,159 functions
SYMBOLS.md             top files by function count
METHOD.md              exact reproduction procedure and the traps
inventory.json         every ELF with arch, type and size
```

Each binary directory contains a `.c` file with the decompiled bodies and an `index.csv`
(`name,address,size,lines,status`). `status` is `ok`, or `asm` for the seven functions
Ghidra's decompiler cannot represent — those appear as annotated ARM listings inside the
same `.c`.

## Firmware anatomy (from `source/version_log.txt`)

| component | what it is | build ref | Anycubic source available |
|---|---|---|---|
| `gklib` | GoKlipper — kinematics, toolhead, heaters, MCU protocol, ACE filament hub (Go 1.23.11) | `refactor/s1cv2_clean` @ `72994be3` | partly ([Klipper-go](https://github.com/ANYCUBIC-3D/Klipper-go)) |
| `gkapi` | local HTTP/RPC + MQTT + cloud + OTA service (Go, module `printerApi`) | `dev-028-s1max-0589c5f7` @ `2fa3acb4` | no |
| `K3SysUi` | touch UI (Qt 5) | `dev031-2725` @ `2e07fe0d` | no |
| `gkcam` | camera capture/streaming | `dev-028` @ `8b64b8a3` | no |
| `engineMode` | Qt service-mode utility | `support_mes` @ `c6cfe433` | no |
| kernel | Linux 5.10.160, ARMv7, Rockchip RV1106 | — | [Kobra3](https://github.com/ANYCUBIC-3D/Kobra3) (GPL-2.0) |
| U-Boot | rv1106-evb, LZMA inside FIT | — | upstream GPL-2.0 |
| MCU | Cortex-M toolhead/mainboard | v1.4.3 | [K3-klipper-mcu](https://github.com/ANYCUBIC-3D/K3-klipper-mcu) |

Toolchain: `arm-rockchip830-linux-uclibcgnueabihf`, `CGO_ENABLED=1 GOARCH=arm` (uClibc,
not glibc — relevant if you cross-compile anything yourself).

## How it was recovered (short version)

1. `update.swu` is a ZipCrypto zip (KS1 password, documented in
   [Rinkhals](https://github.com/rinkhals-community/Rinkhals) `build/tools.sh`) containing
   `update_swu/setup.tar.gz`; the device's own `/userdata/channel.sh` consumes exactly this.
2. `update_ota.tar` inside carries `uboot.img`, `boot.img` (FIT), `system.img`/`oem.img`
   (SquashFS) and `ac_lib.img` (ext4) — all extractable with 7-Zip 26.
3. Every ARM32 ELF was decompiled with Ghidra 12.1.3 headless (2–4 shards in parallel).
   Go binaries were re-symbolised with GoReSym first — note its `textStart` bug: function
   addresses come out relative to the `.gopclntab` VA, so everything must be shifted by
   `textStart − pclntab_va` (gklib −0x932f8c).
4. Kernel: `vmlinux-to-elf` recovered 35,982 kallsyms symbols from the LZMA-compressed
   image; functions were then rebuilt with explicit extents.
5. Functions Ghidra refuses (`Conditional execution: Illegal op in iblock`) were re-imported
   under `ARM:LE:32:v5` and rebuilt with exact symbol sizes — 39 recovered that way, 7 remain
   as listings.

Details, including the traps that silently produce garbage, are in [METHOD.md](METHOD.md).

## What this is not

* Not compilable source. No build system can turn this back into a binary; types, structs
  and most names are gone. C++ appears as raw field offsets; Go carries `unaff_*` register
  artefacts.
* Not complete for the kernel: all 35,308 symbols are present and named, but bodies for
  many small symbols are approximate.
* Not the whole device: `userdata` (your configs, calibrations, gcodes) is never part of
  the update package and is not in here.

## Why publish it

So that people repairing, extending or auditing a printer they own do not each have to
start from zero. If you use it, credit the reverse-engineering effort, respect Anycubic's
rights, and do not present it as open source.
