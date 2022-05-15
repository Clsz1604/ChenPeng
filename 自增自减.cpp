# include <stdio.h>
int main (void)
{
    int i;
    int j;
    int k;
    int m;

    i = j = 3;
    k = ++i; //“前自增”
    m = j++;  //"后自增"

    printf("i=%d j=%d k=%d m=%d\n", i, j, k, m);
    return 0;
}