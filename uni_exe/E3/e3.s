# Inserire qui la soluzione
.globl comp
comp:
    movl    4(%esp), %eax
    movl    8(%esp), %ecx
    movl    (%eax),  %edx  # metto il contenuto in edx
    subl    (%ecx),  %edx  #ora ho il valore di ret
    movl    %edx,   %eax
    ret
