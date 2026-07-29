global ft_memcpy

section .text


ft_memcpy:
	xor rax, rax




.loop:
	cmp rax, rdx
	je .done

	mov cl, byte [rsi + rax]
	mov byte [rdi + rax] , cl


	inc rax
	jmp .loop




.done:
	mov rax, rdi
	ret
