#!/usr/bin/env python3
"""Pack an Anycubic Kobra S1 / S1 Max (KS1/KS1M) update package into a valid .swu.

The printer's USB/OTA update path expects:
  update.swu
    update_swu/setup.tar.gz      <- tar.gz of the update tree root
    update_swu/.gitkeep
and the zip itself must be ZipCrypto-encrypted (stored, no compression) with the
per-model password below.  Verified against stock 2.7.0.9 / 2.7.2.1 / 2.7.2.7
payloads, which all use this exact layout.

Usage:
  python pack_swu.py --stage <dir> --out update.swu [--model KS1]
  python pack_swu.py --unpack KS1_2.7.2.7.swu --dest <dir>

Stage dir must contain the package root (app/, update_shell/, version, update.sh, ...).
"""
import argparse
import hashlib
import os
import shutil
import subprocess
import sys
import tarfile
import tempfile
import zipfile

PASSWORDS = {
    "K2P": "U2FsdGVkX19deTfqpXHZnB5GeyQ/dtlbHjkUnwgCi+w=",
    "K3": "U2FsdGVkX19deTfqpXHZnB5GeyQ/dtlbHjkUnwgCi+w=",
    "K3V2": "U2FsdGVkX19deTfqpXHZnB5GeyQ/dtlbHjkUnwgCi+w=",
    "KS1": "U2FsdGVkX1+lG6cHmshPLI/LaQr9cZCjA8HZt6Y8qmbB7riY",
    "KS1M": "U2FsdGVkX1+lG6cHmshPLI/LaQr9cZCjA8HZt6Y8qmbB7riY",
    "K3M": "4DKXtEGStWHpPgZm8Xna9qluzAI8VJzpOsEIgd8brTLiXs8fLSu3vRx8o7fMf4h6",
}

SEVENZIP = r"C:\Program Files\7-Zip\7z.exe"


def find_7z():
    if os.path.exists(SEVENZIP):
        return SEVENZIP
    exe = shutil.which("7z") or shutil.which("7za")
    if not exe:
        sys.exit("7-Zip not found; install it or put 7z on PATH (needed to write ZipCrypto zips)")
    return exe


def unpack(swu, dest, model="KS1"):
    pwd = PASSWORDS[model].encode()
    os.makedirs(dest, exist_ok=True)
    with zipfile.ZipFile(swu) as z:
        z.extractall(dest, pwd=pwd)
    tgz = os.path.join(dest, "update_swu", "setup.tar.gz")
    if not os.path.exists(tgz):
        sys.exit("no update_swu/setup.tar.gz inside %s" % swu)
    with tarfile.open(tgz) as t:
        t.extractall(dest)
    print("unpacked %s -> %s" % (swu, dest))


EXECUTABLES = {'gklib', 'gkapi', 'gkcam', 'K3SysUi', 'engineMode',
               'libc_helper.so', 'logmain', 'update_normal.sh', 'update_factory.sh'}


def _tar_filter(info):
    """Restore Unix modes the printer expects (Windows reports 0o666 for everything)."""
    base = os.path.basename(info.name.rstrip('/'))
    if info.isdir():
        info.mode = 0o776
    elif base.endswith('.sh') or base in EXECUTABLES:
        info.mode = 0o755
    else:
        info.mode = 0o644
    info.uid = info.gid = 0
    info.uname = info.gname = 'root'
    return info


def pack(stage, out, model="KS1"):
    if model not in PASSWORDS:
        sys.exit("unknown model %s (known: %s)" % (model, ", ".join(PASSWORDS)))
    stage = os.path.abspath(stage)
    out = os.path.abspath(out)
    work = tempfile.mkdtemp(prefix="swu_")
    try:
        updir = os.path.join(work, "update_swu")
        os.makedirs(updir)
        tgz = os.path.join(updir, "setup.tar.gz")
        with tarfile.open(tgz, "w:gz") as t:
            for name in sorted(os.listdir(stage)):
                t.add(os.path.join(stage, name), arcname='./' + name, filter=_tar_filter)
        md5 = hashlib.md5(open(tgz, "rb").read()).hexdigest()
        open(os.path.join(updir, ".gitkeep"), "w").close()
        print("setup.tar.gz  %d bytes  md5 %s" % (os.path.getsize(tgz), md5))

        if os.path.exists(out):
            os.remove(out)
        cmd = [find_7z(), "a", "-tzip", "-mx0", "-mem=ZipCrypto",
               "-p" + PASSWORDS[model], out, "update_swu"]
        r = subprocess.run(cmd, cwd=work, capture_output=True, text=True)
        if r.returncode != 0:
            sys.exit("7z failed:\n%s\n%s" % (r.stdout, r.stderr))
        with zipfile.ZipFile(out) as z:
            names = z.namelist()
            enc = [i.filename for i in z.infolist() if i.flag_bits & 1]
        print("wrote %s  %d bytes" % (out, os.path.getsize(out)))
        print("  entries: %s" % ", ".join(names))
        print("  encrypted: %s" % (enc or "NONE — printer will reject this"))
        if not enc:
            sys.exit(1)
    finally:
        shutil.rmtree(work, ignore_errors=True)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--stage", help="package root to pack (app/, update_shell/, version, ...)")
    ap.add_argument("--out", default="update.swu")
    ap.add_argument("--unpack", help="existing .swu to unpack")
    ap.add_argument("--dest", default="unpacked")
    ap.add_argument("--model", default="KS1")
    a = ap.parse_args()
    if a.unpack:
        unpack(a.unpack, a.dest, a.model)
    elif a.stage:
        pack(a.stage, a.out, a.model)
    else:
        ap.error("need --stage or --unpack")


if __name__ == "__main__":
    main()
