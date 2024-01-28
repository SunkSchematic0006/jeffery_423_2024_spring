	.file	"fib2.c"
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
	subq	$24, %rsp
	movq	%rdi, -24(%rbp)
	cmpq	$1, -24(%rbp)
	jg	.L2
	.cfi_offset 3, -24
	movl	$1, %eax
	jmp	.L3
.L2:
	movq	-24(%rbp), %rax
	subq	$1, %rax
	movq	%rax, %rdi
	call	fib
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	subq	$2, %rax
	movq	%rax, %rdi
	call	fib
	leaq	(%rbx,%rax), %rax
.L3:
	addq	$24, %rsp
	popq	%rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	fib, .-fib
	.ident	"GCC: (GNU) 4.4.5 20110214 (Red Hat 4.4.5-6)"
	.section	.note.GNU-stack,"",@progbits
