int sum(int x)
{
    int s = 0;
    while (x > 0)
        s += x--;
    return (s);
}

//whithout loop
int sum2(int x)
{
    return ((x * (x + 1)/2));
}

//c_equivalent_sum
int sum1(int x)
{
    int a = 0;
    int c = x;

    L:
        if(c - 0 < 0) goto F;
        a = a + c;
        c = c - 1;
        goto L;
    F:
        return (a);
}