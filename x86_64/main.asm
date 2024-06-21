
global _start
section .data
    name db "abdellah",0x0a,0x00
section .bss 
section .text
_start:

    push name
    call print

    call exit


print:
    push rbp
    mov rbp,rsp
    mov r8,QWORD[rbp+16]
start:
    cmp byte [r8],0h
    jz end
    mov rax,0x01
    mov rdi,0x01
    mov rsi,r8
    mov rdx,0x01
    syscall
    inc r8
    jmp start
end:
    leave
    ret

exit:
    mov rax,0x03c
    mov rdi,0x00
    syscall
