	.file	"demo_2.c"
	.text
	.globl	remdiv
	.type	remdiv, @function
remdiv:
.LFB0:
	.cfi_startproc
	movq	%rdi, %rax
	movq	%rdx, %rdi
	cqto
	idivq	%rsi
	movq	%rax, (%rdi)
	movq	%rdx, (%rcx)
	ret
	.cfi_endproc
.LFE0:
	.size	remdiv, .-remdiv
	.ident	"GCC: (GNU) 10.2.1 20210130 (Red Hat 10.2.1-11)"
	.section	.note.GNU-stack,"",@progbits
