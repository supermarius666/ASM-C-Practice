#include <stdio.h>
#include <stdlib.h>

int expp(int x, int y, int z, int w);

int main(int argc, char **argv)
{
    if (argc < 5)
    {
        printf("Usage: %s <num1> <num2> <num3> <num4>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);

    int check = expp(a, b, c, d);
    if (check == ((2*a*b-7*a+1 + 2*c)*d))
    {
        printf("Correct!\n");
    }
    else
    {
        printf("Incorrect!\n");
        printf("Expected: %d\n", (2*a*b-7*a+1 + 2*c)*d);
        printf("Your result: %d\n", expp(a,b,c,d));
    }
}
//compile with gcc -m32 -g -o exp main.c exp.s 