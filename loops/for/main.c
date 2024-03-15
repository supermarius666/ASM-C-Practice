#include <stdio.h>
#include <stdlib.h>

int sum(int x);

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <num1>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);

    int check = sum(a);
    printf("Sum of firt %d numbers = %d\n", a, check);
}
//compile with gcc -m32 -g -o loop main.c loop.s 