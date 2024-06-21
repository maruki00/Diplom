SECTION .data
SECTION .text
 global main
main:
 xor rax, rax
 xor rdx, rdx
 
 push rdx
 mov rcx, 0x736c2f2f6e69622f    ; push "/bin//ls" to stack
 push rcx
 mov rdi, rsp
 mov rcx, 0x2f2e ; push "./" to stack 
 push rcx
 mov rsi, rsp
 
 push rax               ; push 8 null bytes
 push rsi               ; push "./" location to stack
 push rdi               ; push "/bin//ls" location to stack
 mov rsi, rsp
 mov rax, 59
 syscall
 mov rax, 60
 syscall
