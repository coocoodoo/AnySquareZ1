"""Wrap a raw ARM32 load image in a minimal ELF32 so Ghidra analyses it like a real
executable: one PT_LOAD mapping the file at a chosen vaddr, e_entry set to the first
executable byte, so FLIRT/ARM analyzers disassemble from the entry and follow flow.

usage: python elf_wrap.py <raw.bin> <out.elf> <vaddr> [entry_offset]
"""
import struct
import sys

BASE = 0x1000          # keep headers below the load segment


def build(raw, vaddr, entry_off):
    ehsize, phentsize, phnum = 52, 32, 1
    payload_off = BASE
    entry = vaddr + entry_off
    hdr = bytearray()
    hdr += b'\x7fELF' + bytes([1, 1, 1, 0]) + b'\x00' * 8      # ident
    hdr += struct.pack('<HHIIIIIHHHHHH',
                       2,            # e_type = EXEC
                       40,           # e_machine = ARM
                       1,            # e_version
                       entry,        # e_entry
                       ehsize,       # e_phoff
                       0,            # e_shoff
                       0,            # e_flags
                       ehsize,       # e_ehsize
                       phentsize,    # e_phentsize
                       phnum,        # e_phnum
                       0, 0, 0)      # shentsize/shnum/shstrndx
    ph = struct.pack('<IIIIIIII',
                     1,                     # PT_LOAD
                     payload_off,           # p_offset
                     vaddr,                 # p_vaddr
                     vaddr,                 # p_paddr
                     len(raw),              # p_filesz
                     len(raw),              # p_memsz
                     5,                     # PF_R|PF_X
                     0x1000)
    out = bytes(hdr) + ph + b'\x00' * (payload_off - ehsize - phentsize) + raw
    open(sys.argv[2], 'wb').write(out)
    print('wrote %s: %d bytes, entry %#x, load %#x' % (sys.argv[2], len(out), entry, vaddr))


if __name__ == '__main__':
    raw = open(sys.argv[1], 'rb').read()
    vaddr = int(sys.argv[3], 0)
    entry_off = int(sys.argv[4], 0) if len(sys.argv) > 4 else 0
    build(raw, vaddr, entry_off)
