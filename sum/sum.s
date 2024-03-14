.globl sum  # sum is the name of the function
sum:
    movl    4(%esp), %eax     # int a = x;
    addl    8(%esp), %eax     # a = a + y;
    ret                       # return a

