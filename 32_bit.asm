section .data
	message: db 'Make an Interpreter', 10
	len: equ $-message

section .text
	global _start

_start:
	mov eax, 4           
	mov ebx, 1            
	mov ecx, message        
	mov edx, len   	                     
	int 80h
	mov eax, 1            
	mov ebx, 0            
	int 80h
