	.file	"foo.c"
	.section	.rodata
.LC0:
	.string	"hello"
	.text
	.globl	fac
	.type	fac, @function
fac:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L2
	jmp	.L3
.L2:
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
.L3:
	movl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	fac, .-fac
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-28)"
	.section	.note.GNU-stack,"",@progbits
