.globl mult
mult:
    movl    4(%esp), %eax   # int a = x;
    imull   8(%esp), %eax   # a = a * y;
    ret                     # return a;


# note that imul is for signed values.
# for unsigned values you should use mul. 