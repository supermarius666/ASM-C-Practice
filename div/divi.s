.globl divi
divi:
    movl    4(%esp), %eax
    xorl    %edx,    %edx
    idivl   8(%esp)
    ret

# i have to put the dividend x in eax
# then i have to put zero in edx
# and finally divide by y which is the divisor

# note:
#       eax --> quotient
#       edx --> remainder