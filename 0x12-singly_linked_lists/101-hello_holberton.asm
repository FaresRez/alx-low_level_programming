section .data
    msg db 'Hello, Holberton', 0Ah

section .text
    global _start

_start:
    mov rdi, msg
    mov rax, 0
    call printf

    mov rax, 60
    xor rdi, rdi
    syscall
