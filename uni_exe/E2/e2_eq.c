// Inserire qui il C equivalente
unsigned int fib(unsigned int n)
{
    unsigned int a = 0;
    unsigned int c = 1;
    unsigned int d = n;

    if (d - 0 != 0) goto E_1;
    return(a);
    E_1:
        if (d - 1 != 0) goto FOR;
        a = c;
        return (a);
    FOR:
        if (d - 1 <= 0) goto EXIT;
        a = a + c;
        a = a + c;
        c = a - c; //    c = a - c --> c = -c --> c = -c + a
        a = a - c;
        d--;
        goto FOR;
    
    EXIT:
        a = c;
        return (a);





    
}