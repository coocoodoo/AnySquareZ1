# DISCLAIMER / LEGAL NOTICE

**The code in this repository is not mine, and it is not open source.**

Everything under `decompiled/` was produced by feeding binaries extracted from the
Anycubic Kobra S1 firmware update package `KS1_2.7.2.7.swu` through Ghidra's decompiler.
The result is *derived from proprietary firmware* owned by Anycubic. It is published here
for **interoperability, security research, repair and educational study**, in the same
spirit as reverse-engineering write-ups, not as a redistribution of Anycubic's work with
permission.

Consequences you should understand before using or contributing:

* No license is granted. No warranty of any kind. Nothing here is compilable source —
  it is decompiler output, with types and names partly lost.
* If you are an Anycubic representative and want this removed, open an issue or email the
  repository owner; it will be taken down promptly. No DMCA counter-notice will be filed.
* Firmware images, the update package itself and the extracted root filesystems are
  **not** included here (see `.gitignore`). Anyone can re-create them from Anycubic's own
  published firmware.
* Components that Anycubic *does* publish as open source are the exception and are
  credited below; the decompilations of those binaries still derive from Anycubic's
  builds, and the upstream projects' licenses (GPL-2.0 for the Linux kernel and U-Boot,
  GPL-3.0 for Klipper) govern the originals.

## Upstream projects

* [ANYCUBIC-3D/Klipper-go](https://github.com/ANYCUBIC-3D/Klipper-go) — Anycubic's Go port
  of Klipper (`gklib`); Klipper itself is GPL-3.0.
* [ANYCUBIC-3D/K3-klipper-mcu](https://github.com/ANYCUBIC-3D/K3-klipper-mcu) — MCU
  firmware source (Klipper MCU, GPL-3.0).
* [ANYCUBIC-3D/Kobra3](https://github.com/ANYCUBIC-3D/Kobra3) — kernel source drop
  (Linux 5.10.160, GPL-2.0).
* Linux kernel 5.10.160, U-Boot, Qt 5, FFmpeg, OpenSSL, uClibc — all under their own
  licenses.

## Tooling credits

* [Ghidra](https://ghidra-sre.org/) 12.1.3 (NSA) — decompiler.
* [GoReSym](https://github.com/mandiant/GoReSym) (Mandiant) — Go symbol recovery.
* [vmlinux-to-elf](https://github.com/kordex/vmlinux-to-elf) — kallsyms recovery for the
  kernel image.
* [7-Zip](https://7-zip.org/) — SquashFS/ext4/FIT extraction.
* [Rinkhals](https://github.com/rinkhals-community/Rinkhals) — its published `tools.sh`
  documents the `.swu` container password; no Rinkhals code is included here.
