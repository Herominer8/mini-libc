global ft_memmove

section .text

ft_memmove:
    mov rax, rdi

    cmp rdi, rsi
    ja .backward

    xor rcx, rcx

.forward:
    cmp rcx, rdx
    je .done

    mov r8b, byte [rsi + rcx]
    mov byte [rdi + rcx], r8b

    inc rcx
    jmp .forward

.backward:
    mov rcx, rdx
    dec rcx

.back_loop:
    mov r8b, byte [rsi + rcx]
    mov byte [rdi + rcx], r8b

    dec rcx
    cmp rcx, -1
    jne .back_loop

.done:
    ret
