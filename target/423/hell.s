	.file	"hell.c"
	.text
	.comm	x,8,8
	.comm	y,8,8
	.comm	z,8,8
	.section	.rodata
.LC0:
	.string	"x is %ld\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	$2, y(%rip)
	movq	$3, z(%rip)
	movq	y(%rip), %rax
	movq	z(%rip), %rcx
	cqto
	idivq	%rcx
	movq	%rdx, %rax
	movq	%rax, x(%rip)
	jmp	.L2
.L3:
	movq	x(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L2:
	movq	x(%rip), %rax
	cmpq	$1, %rax
	je	.L3
	movl	$3, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
