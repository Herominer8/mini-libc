global ft_bzero

section .text

ft_bzero:

	xor rcx, rcx


.loop:
	cmp rcx, rdx
	je .done

	mov byte [rdi + rcx], 0

	inc rcx
	jmp .loop


.done:
	ret
