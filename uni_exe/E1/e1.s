# Inserire qui la soluzione
.globl min
min:
    # carico le variabili nei registrigi a, c, d
    movl    4(%esp), %eax
    movl    8(%esp), %ecx
    movl    12(%esp),%edx

    # primo if
    cmpl    %ecx, %eax
    jge     ELSE_1
    
    # secondo if
    cmpl    %edx, %eax
    jge     RET_2_1
    
    #return
    ret

ELSE_1:
    cmpl    %edx, %ecx
    jge     RET_2_1
    movl    %ecx, %eax
    ret

RET_2_1:
    movl    %edx, %eax;
    ret

    


