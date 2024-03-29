# scrivere la soluzione qui...
.globl find
find:
	xorl	%eax, %eax
	movl	4(%esp), %ecx
	movl	12(%esp), %edx

F:
	cmpl	8(%esp), %eax
	jge		R1
	cmpl	%edx, (%ecx, %eax, 4)
	jne		N
	movl	$1, %eax
	jmp		R2
N:
	incl	%eax
	jmp		F

R1:
	xorl	%eax, %eax
	ret

R2:
	ret
