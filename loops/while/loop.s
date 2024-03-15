.globl sum
sum:
    xorl    %eax,   %eax
    movl    4(%esp),%ecx

L:
    testl   %ecx, %ecx
    jl      F
    addl    %ecx, %eax
    decl    %ecx
    jmp     L
F:
    ret