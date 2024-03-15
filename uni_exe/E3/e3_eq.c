// Inserire qui il C equivalente
int comp(const void* xv, const void* yv)
{
    int *a = (int *)xv;
    int ax = *a;
    int *c = (int *)yv;
    int cx = *c;
    return ax - cx;

}