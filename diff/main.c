#include <stdio.h>
#include <stdlib.h>

int diff(int x, int y);

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    int check = diff(a, b);
    if (check == (a - b))
    {
        printf("Difference is correct: %d - %d = %d\n", a, b, check);
    }
    else
    {
        printf("Difference is incorrect: %d - %d != %d\n", a, b, check);
    }
}
//compile with gcc -m32 -g -o diff main.c diff.s 