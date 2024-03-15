int f(int x, int y){
    int z = x + y;
    if (z > 15) return 1;
    return 0;
}

int F(int x, int y)
{
    int a = x;
    int c = y;

    int d = a + c;

    if (d - 15 <= 0) goto E;
    a = 1;
    return (a);
    E:
        a = 0;
        return (a);
}