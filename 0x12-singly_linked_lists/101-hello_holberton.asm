section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8   ; Align the stack on a 16-byte boundary (for macOS compatibility)

    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    add rsp, 8   ; Restore the stack

    xor eax, eax
    ret

