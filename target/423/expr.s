	.file	"expr.c"
	.section	.rodata
.LC0:
	.string	"a is %d\n"
	.text
.globl main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	pushq	%rbx
	subq	$88, %rsp
	movq	$1, -72(%rbp)
	movq	$2, -64(%rbp)
	movq	$3, -56(%rbp)
	movq	$4, -48(%rbp)
	movq	$5, -40(%rbp)
	movq	$6, -32(%rbp)
	movq	$7, -24(%rbp)
	movq	-64(%rbp), %rax
	movq	-72(%rbp), %rdx
	leaq	(%rdx,%rax), %rcx
	movq	-48(%rbp), %rax
	movq	-56(%rbp), %rdx
	leaq	(%rdx,%rax), %rax
	imulq	%rax, %rcx
	movq	-32(%rbp), %rax
	movq	-40(%rbp), %rdx
	leaq	(%rdx,%rax), %rbx
	movq	-72(%rbp), %rax
	movq	-24(%rbp), %rdx
	leaq	(%rdx,%rax), %rax
	imulq	%rbx, %rax
	movq	-56(%rbp), %rdx
	movq	%rdx, %rbx
	imulq	-40(%rbp), %rbx
	movq	%rbx, -88(%rbp)
	movq	%rax, %rdx
	sarq	$63, %rdx
	idivq	-88(%rbp)
	leaq	(%rcx,%rax), %rax
	movq	%rax, -72(%rbp)
	movl	$.LC0, %eax
	movq	-72(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	addq	$88, %rsp
	popq	%rbx
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-3)"
	.section	.note.GNU-stack,"",@progbits
