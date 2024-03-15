.globl f
f:
    movl    8(%esp), %ecx
    cmpl    %ecx,    4(%esp)
    jl      L
    movl    $1,      %eax
    jmp    F

L:
    xorl    %eax, %eax
F:
    ret
