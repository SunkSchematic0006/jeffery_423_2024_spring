	.file	"demo.as"
	.text
.globl fib
	.type	fib, @function
fib:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	movq	%rdi, -56(%rbp)
	cmpq	$1, -56(%rbp)
	setle	%al
	movzbl	%al,%eax
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L0
	jmp	.L1
.L0:
	movq	$1, %rax
	addq	$56, %rsp
	popq	%rbx
	leave
	.cfi_def_cfa 7, 8
	ret
.L1:
	movq	-56(%rbp), %rax
	subq	$1, %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	call	fib
	movq	%rax, -24(%rbp)
	movq	-56(%rbp), %rax
	subq	$2, %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rdi
	call	fib
	movq	%rax, -40(%rbp)
	movq	-24(%rbp), %rax
	addq	-40(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	addq	$56, %rsp
	popq	%rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	fib, .-fib
	.ident	"finalcg 0.1"
