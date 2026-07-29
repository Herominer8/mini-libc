global ft_strcmp

section .text

ft_strcmp:

	xor rax, rax


.loop:
	mov al, byte [rdi]
	mov cl, byte [rsi]

	cmp al, cl
	jne .done


	cmp al, 0
	je .done


	inc rdi
	inc rsi

	jmp .loop


.done:
	movzx rax, al
	movzx rcx, cl
	sub rax, rcx
	ret
