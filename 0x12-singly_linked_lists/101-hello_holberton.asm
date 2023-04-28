section .data
    alx db 'Hello, Holberton', 0xA

section .text
    global main

main:
    mov ecx, alx
    mov ebx, 1
    mov eax, 4
    int 0x80
    xor eax, eax
