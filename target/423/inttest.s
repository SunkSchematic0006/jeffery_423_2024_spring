	.file	"inttest.cpp"
.globl x
	.data
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.long	5
.globl a
	.bss
	.align 16
	.type	a, @object
	.size	a, 20
a:
	.zero	20
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-3)"
	.section	.note.GNU-stack,"",@progbits
