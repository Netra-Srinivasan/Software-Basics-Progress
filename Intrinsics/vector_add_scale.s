	.file	"vector_add_scale.cpp"
	.text
	.p2align 4,,15
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1914:
	.cfi_startproc
	movl	$__ZStL8__ioinit, %ecx
	jmp	__ZNSt8ios_base4InitD1Ev
	.cfi_endproc
LFE1914:
	.p2align 4,,15
	.globl	__Z9VectorAddPfS_S_i
	.def	__Z9VectorAddPfS_S_i;	.scl	2;	.type	32;	.endef
__Z9VectorAddPfS_S_i:
LFB1489:
	.cfi_startproc
	pushl	%ebx
	.cfi_def_cfa_offset 8
	.cfi_offset 3, -8
	movl	20(%esp), %ebx
	testl	%ebx, %ebx
	jle	L2
	movl	8(%esp), %eax
	movl	12(%esp), %ecx
	movl	16(%esp), %edx
	leal	(%eax,%ebx,4), %ebx
	.p2align 4,,10
L5:
	flds	(%eax)
	addl	$4, %eax
	addl	$4, %ecx
	addl	$4, %edx
	fadds	-4(%ecx)
	fstps	-4(%edx)
	cmpl	%ebx, %eax
	jne	L5
L2:
	popl	%ebx
	.cfi_restore 3
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
LFE1489:
	.section	.text.startup,"x"
	.p2align 4,,15
	.def	__GLOBAL__sub_I__Z9VectorAddPfS_S_i;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I__Z9VectorAddPfS_S_i:
LFB1915:
	.cfi_startproc
	subl	$28, %esp
	.cfi_def_cfa_offset 32
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
	addl	$28, %esp
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
LFE1915:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I__Z9VectorAddPfS_S_i
.lcomm __ZStL8__ioinit,1,1
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
