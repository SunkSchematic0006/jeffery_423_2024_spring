	.file	"new.cpp"
	.section	.text._ZN1CC2Ev,"axG",@progbits,_ZN1CC5Ev,comdat
	.align 2
	.weak	_ZN1CC2Ev
	.type	_ZN1CC2Ev, @function
_ZN1CC2Ev:
.LFB1:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$3, (%rax)
	movq	-8(%rbp), %rax
	movq	$4, 8(%rax)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_ZN1CC2Ev, .-_ZN1CC2Ev
	.weak	_ZN1CC1Ev
	.set	_ZN1CC1Ev,_ZN1CC2Ev
	.text
.globl main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	movl	$16, %edi
	.cfi_offset 3, -24
	call	_Znwm
	movq	%rax, %rbx
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_ZN1CC1Ev
.L5:
	movq	%rbx, -24(%rbp)
	movl	$0, %eax
	addq	$24, %rsp
	popq	%rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-3)"
	.section	.note.GNU-stack,"",@progbits
