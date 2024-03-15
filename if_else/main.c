#include <stdio.h>
#include <stdlib.h>

int f(int x, int y);

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int check = f(a, b);
    if (check)
    {
        printf("%d >= %d\n", a, b);
    }
    else
    {
       printf("%d <= %d\n", a, b);
    }
}
//compile with gcc -m32 -g -o if main.c if.s 