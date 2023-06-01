section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

section .text
	extern printf

global main

main:
	sub rsp, 8

	mov rdi, fmt
	lea rsi, [rel msg]
	xor eax, eax
	call printf

	add rsp, 8

	xor eax, eax
	ret
