int expr(int x, int y, int z, int w)
{
    return ((2*x*y)-(7*x+1) + (2*z))*w;
}

//c_equivalent 
int expp(int x, int y, int z, int w)
{
    int a = x;
    int c = a;

    a = a * y;
    a = a * 2;

    c = c * 7;
    c = c + 1;

    int d = z;
    d = d * 2;

    a = a - c;
    a = a + d;
    a = a * w;

    return a;
}