section .data
	msg db "Hello, Holberton", 10, 0
section .bss
section .text
	global main
main:
	mov rax, 1 ;write
	mov rdi, 1 ;to stdout
	mov rsi, msg ;string to display to rsi

	mov rdx, 17 ;length of string without 0 and 10
	syscall ;display the string
	mov rax, 60 ;exit
	mov rdi, 0 ;success exit code
	syscall ;quit
