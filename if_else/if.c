int f(int x, int y)
{
    if (x >= y)
        return (1);
    else
        return (0);
}

//c_equivalent
int ff(int x, int y)
{
    int c = y;
    if (x - c < 0) goto L;
    int a = 1;
    goto F;

    L:
        a = 0;
    F:
        return a;
}