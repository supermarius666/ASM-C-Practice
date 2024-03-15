.globl sum
sum:
    xorl    %eax,   %eax
    movl    4(%esp),%ecx
    movl    %ecx,   %edx
L:
    testl   %edx, %edx
    jl      F
    addl    %edx, %eax
    decl    %edx
    jmp     L
F:
    ret