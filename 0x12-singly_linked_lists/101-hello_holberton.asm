section .data
format: db `Hello, Holberton\n`,0

section .text
global main
extern printf

main:
    sub rsp, 8
    mov rdi, format
    xor eax, eax
    call printf
    add rsp, 8
    mov eax, 0
    ret
