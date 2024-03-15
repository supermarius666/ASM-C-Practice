.globl f

f:									# int f(int x, int y){
	movl 4(%esp), %eax				# metto x in eax
	movl 8(%esp), %ecx				# metto y in ecx
	movl %eax, %edx					# int z = x;
	addl %ecx, %edx					# z += y;   -->cambiato da addl %edx, %eax in addl %ecx, %edx
	cmpl $15, %edx					# if (z > 15) goto E;
	jle E							# ja --> jle
	movl $1, %eax					# return 0 --> return 1;
	ret
	
E: 
	xorl %eax, %eax					# return 1 --> retrn 0;
	ret
