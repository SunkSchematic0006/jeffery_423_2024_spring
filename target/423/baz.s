	.file	"baz.c"
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
	movq	-48(%rbp), %rax
	movq	-56(%rbp), %rdx
	leaq	(%rdx,%rax), %rax
	addq	-40(%rbp), %rax
	addq	-32(%rbp), %rax
	addq	-24(%rbp), %rax
	addq	-16(%rbp), %rax
	addq	-8(%rbp), %rax
	addq	-56(%rbp), %rax
	addq	-40(%rbp), %rax
	addq	-24(%rbp), %rax
	movq	%rax, -56(%rbp)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
