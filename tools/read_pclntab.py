import struct

BIN = r'C:\Users\quant\Documents\Anycubic\fw\2.7.2.7\payload\app\gklib'
d = open(BIN, 'rb').read()
PCLN_OFF = 0x937108
hdr = d[PCLN_OFF:PCLN_OFF + 72]
print('magic %#x  minLC %d  ptrSize %d' % (struct.unpack_from('<I', hdr, 0)[0], hdr[6], hdr[7]))
nfunc, nfiles, textStart, funcnameOff, cuOff, filetabOff, pctabOff, pclnOff = struct.unpack_from('<8I', hdr, 8)
print('nfunc=%d nfiles=%d textStart=%#x' % (nfunc, nfiles, textStart))
print('funcnameOff=%#x cuOff=%#x filetabOff=%#x pctabOff=%#x pclnOff=%#x'
      % (funcnameOff, cuOff, filetabOff, pctabOff, pclnOff))
print('pclntab VA = %#x' % (PCLN_OFF + 0x10000))
print('delta to apply to GoReSym addrs = %#x' % (textStart - (PCLN_OFF + 0x10000)))
