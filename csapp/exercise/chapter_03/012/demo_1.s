	.file	"example.c"
	.text
	.globl	store_uprod
	.type	store_uprod, @function
store_uprod:
.LFB4:
	.cfi_startproc
	movq	%rsi, %rax
	mulq	%rdx
	movq	%rax, (%rdi)
	movq	%rdx, 8(%rdi)
	ret
	.cfi_endproc
.LFE4:
	.size	store_uprod, .-store_uprod
	.ident	"GCC: (GNU) 10.2.1 20210130 (Red Hat 10.2.1-11)"
	.section	.note.GNU-stack,"",@progbits
