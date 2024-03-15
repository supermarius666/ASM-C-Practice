# Inserire qui la soluzione

.globl fib
fib:
    xorl    %eax, %eax
    movl    $1,   %ecx
    movl    4(%esp), %edx
    testl   %edx, %edx
    jne     E_1 
    ret

E_1:
    cmpl    $1, %edx
    jne     FOR
    movl    %ecx, %eax
    ret
FOR:
    cmpl    $1, %edx
    jle    EXIT
    addl    %ecx, %eax
    addl    %ecx, %eax
    negl    %ecx
    addl    %eax, %ecx 
    subl    %ecx, %eax # 
    decl    %edx
    jmp     FOR
EXIT:
    movl    %ecx, %eax
    ret



