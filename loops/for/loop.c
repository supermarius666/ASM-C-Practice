int sum(int x)
{
    int s = 0;
    for(int i = x; i > 0; i--)
        s += i;
    return (s);
}

//c_equivalent
int sum1(int x)
{
    int a = 0;
    int c = x;
    int d = c;

   L:
        if (d - 0 < 0) goto F;
        a = a + d;
        d--;
        goto L; 
    
    F:
        return (a);

}