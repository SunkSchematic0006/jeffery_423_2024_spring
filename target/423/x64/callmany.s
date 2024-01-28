	.file	"callmany.c"
	.text
.globl f
	.type	f, @function
f:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	%r8, -40(%rbp)
	movq	%r9, -48(%rbp)
	movq	-8(%rbp), %rax
	imulq	-16(%rbp), %rax
	imulq	-24(%rbp), %rax
	imulq	-32(%rbp), %rax
	imulq	-40(%rbp), %rax
	imulq	-48(%rbp), %rax
	imulq	16(%rbp), %rax
	imulq	24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	f, .-f
.globl main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	$2, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	leaq	(%rax,%rdx), %rdx
	movq	-8(%rbp), %rax
	movq	$8, 8(%rsp)
	movq	$7, (%rsp)
	movl	$6, %r9d
	movq	%rdx, %r8
	movl	$15, %ecx
	movq	%rax, %rdx
	movl	$3, %esi
	movl	$5, %edi
	call	f
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.5 20110214 (Red Hat 4.4.5-6)"
	.section	.note.GNU-stack,"",@progbits
