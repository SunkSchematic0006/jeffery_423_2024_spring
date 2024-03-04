	.file	"callprintf.c"
	.section	.rodata
.LC0:
	.string	"hello, %d\n"
.LC1:
	.string	"hello, %s\n"
.LC2:
	.string	"world"
	.text
.globl main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$.LC0, %eax
	movl	$12, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$.LC1, %eax
	movl	$.LC2, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.6 20120305 (Red Hat 4.4.6-4)"
	.section	.note.GNU-stack,"",@progbits
