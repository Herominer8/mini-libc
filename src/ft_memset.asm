global ft_memset

section .text

ft_memset:
	xor rax, rax



.loop:
	cmp rax, rdx
	je .done

	mov byte [rdi + rax], sil

	inc rax
	jmp .loop


.done:
	mov rax, rdi
	ret
