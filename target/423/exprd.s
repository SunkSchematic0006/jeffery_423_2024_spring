	.file	"exprd.c"
	.section	.rodata
.LC7:
	.string	"a is %g\n"
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
	subq	$64, %rsp
	movabsq	$4607632778762754458, %rax
	movq	%rax, -56(%rbp)
	movabsq	$4612136378390124954, %rax
	movq	%rax, -48(%rbp)
	movabsq	$4614613358185178726, %rax
	movq	%rax, -40(%rbp)
	movabsq	$4616639978017495450, %rax
	movq	%rax, -32(%rbp)
	movabsq	$4617878467915022336, %rax
	movq	%rax, -24(%rbp)
	movabsq	$4619116957812549222, %rax
	movq	%rax, -16(%rbp)
	movabsq	$4620355447710076109, %rax
	movq	%rax, -8(%rbp)
	movsd	-56(%rbp), %xmm0
	movapd	%xmm0, %xmm1
	addsd	-48(%rbp), %xmm1
	movsd	-40(%rbp), %xmm0
	addsd	-32(%rbp), %xmm0
	mulsd	%xmm0, %xmm1
	movsd	-24(%rbp), %xmm0
	movapd	%xmm0, %xmm2
	addsd	-16(%rbp), %xmm2
	movsd	-8(%rbp), %xmm0
	addsd	-56(%rbp), %xmm0
	mulsd	%xmm2, %xmm0
	movsd	-40(%rbp), %xmm2
	mulsd	-24(%rbp), %xmm2
	divsd	%xmm2, %xmm0
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -56(%rbp)
	movl	$.LC7, %eax
	movsd	-56(%rbp), %xmm0
	movq	%rax, %rdi
	movl	$1, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-3)"
	.section	.note.GNU-stack,"",@progbits
