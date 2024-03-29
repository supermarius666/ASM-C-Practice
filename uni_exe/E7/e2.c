int find(int* v, int n, int x) {
    int i;
    for (i=0; i<n; ++i)
        if (v[i] == x) return 1;
    return 0;
}

//codice c equivalente
int find_(int *v, int n, int x)
{
    int a = 0;              // rappresenta la i
    int *c = v;             // è l'array
    int d = x;

    F:
        if (a - n >= 0) goto R1;
        if (c[a] - d != 0) goto N;
        a = 1;
        goto R2;
    N:
        a = a + 1;
        goto F;
        
    R1:
        a = 0;
        return (a);
    R2:
        return (a);
}