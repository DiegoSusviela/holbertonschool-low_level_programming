section .text							;kill me plox, im doing this the hard way AGAIN
	extern printf
	global main							;linker declaration
main:									;linker entry
	mov	rdi, msg_to_print				;source index
	mov rax, 0							;sys call yay... in betweeen the printf call
	call printf							;our call to printf
	mov rax, 0							;sys call again, idk a guy in stackoverflow did it, i dont really give a s*t ONCE AGAIN
	ret									;return from the procedure

msg_to_print:
	db "Hello, Holberton", 10, 0		;our bloddy printing, im sick of doing things in asssembly when theres an easy way out there