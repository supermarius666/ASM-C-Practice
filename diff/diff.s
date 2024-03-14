.globl diff
diff:
    movl    4(%esp), %eax   # int a = x;
    subl    8(%esp), %eax   # a = a - y;
    ret                     # return a;