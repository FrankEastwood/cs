	.file	"example.c"
	.text
	.globl	arith2
	.type	arith2, @function
arith2:
.LFB0:
	.cfi_startproc
	orq	%rsi, %rdi
	sarq	$3, %rdi
	notq	%rdi
	movq	%rdx, %rax
	subq	%rdi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	arith2, .-arith2
	.ident	"GCC: (GNU) 10.2.1 20210130 (Red Hat 10.2.1-11)"
	.section	.note.GNU-stack,"",@progbits
