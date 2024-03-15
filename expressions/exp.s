.globl expr
expr:
    movl    4(%esp), %eax
    movl    %eax,    %ecx
    imull   8(%esp), %eax
    imull   $2,      %eax
    imull   $7,      %ecx
    incl    %ecx
    movl    12(%esp),%edx
    imull   $2,      %edx
    subl    %ecx,    %eax
    addl    %edx,    %eax
    imull   16(%esp),%eax
    ret
