// scrivere la soluzione qui...
.globl my_strcmp
my_strcmp:
	movl	4(%esp), %ecx
	movl	8(%esp), %edx

L:
	cmpb	$0, (%ecx)
	je 		R	
	movb 	(%edx), %al
	cmpb	%al, (%ecx)
	jne		R
	incl	%ecx  
	incl	%edx
	jmp		L
R:
	movb	(%ecx), %al
	subb	(%edx), %al
	ret
