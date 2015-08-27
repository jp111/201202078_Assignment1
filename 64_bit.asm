section .data
	message: db 'Make an Interpreter', 10
	len: equ $-message

section .text
	global _start

_start:
	mov rax, 1           
	mov rdi, 1            
	mov rsi, message        
	mov rdx, len   	                     
	syscall
	mov rax, 60            
	mov rdi, 0            
	syscall
