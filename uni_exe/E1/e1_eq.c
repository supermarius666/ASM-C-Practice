// Inserire qui il C equivalente
int min(int x, int y, int z)
{
    int a = x;
    int c = y;
    int d = z;

    if (a - c >= 0) goto ELSE_1;
    if (a - d >= 0) goto  RET_2_1;
    return (a);
    ELSE_1:
        if (c - d >= 0) goto RET_2_1;
        a = c;
        return (a);
    RET_2_1:
        a = d;
        return (a);
    

}