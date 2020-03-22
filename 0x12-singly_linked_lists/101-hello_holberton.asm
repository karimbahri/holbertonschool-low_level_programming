extern printf

global main

section .text

	program

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, txt
	call printf
	
	mov rax, 60
	mov rdi, 0

section .rodata

	txt: db "Hello, Holberton"