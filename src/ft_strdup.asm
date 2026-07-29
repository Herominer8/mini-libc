global ft_strdup

extern ft_strlen
extern malloc
extern ft_strcpy

section .text


ft_strdup:
	push rbx
	mov rbx, rdi

	call ft_strlen

	inc rax

	mov rdi, rax
	call malloc

	cmp rax, 0
	je .error

	mov rdi, rax
	mov rsi, rbx
	call ft_strcpy

	pop rbx
	ret

.error:
	pop rbx
	xor rax, rax
	ret





