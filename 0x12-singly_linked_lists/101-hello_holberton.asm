; Prints "Hello, Holberton" to the console using only printf
; Runs on 64-bit linux only.
; To assemble and run:
;
;	
global	main
	extern	printf
main:
	mov	edi, format
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret
format: db	`Hello, Holberton\n`, 0
