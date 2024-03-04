	.file	"goto.c"
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
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	cmpq	$12, -24(%rbp)
	setle	%al
	movzbl	%al, %eax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L8
.L2:
	movq	-24(%rbp), %rax
	imulq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	nop
.L4:
	movl	$0, %eax
	jmp	.L5
.L8:
	nop
.L7:
.L3:
	movq	$-1, %rax
.L5:
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
