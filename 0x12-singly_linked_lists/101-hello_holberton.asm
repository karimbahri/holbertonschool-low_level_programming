
section .text
	extern printf
	program

global main

main:
	mov esi, txt
	mov edi, format
	call printf
	
	mov rax, 60
	mov rdi, 0

section .rodata

	txt: db "Hello, Holberton"
	format: db "%s", 10, 0