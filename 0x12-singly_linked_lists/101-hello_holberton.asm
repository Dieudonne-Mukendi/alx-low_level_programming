        global  main
	extern  printf

	section .text
main:
	push    rbx
print:
	push    rax
	push	rcx
	mov	rdi, message
	xor	rax, rax
	call	printf
	pop	rcx
	pop	rax
	pop	rbx
	ret
message:
	db	"Hello, Holberton", 10, 0
