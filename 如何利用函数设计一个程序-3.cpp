# include <stdio.h>
int main (void)
{
    int val;
    int i;
    int j;

    scanf("%d", &val);

    for (i = 2; i <=val;i++)
    {
        for (j = 2; j < i;j++)
        {
            if (0==i%j)
                break;
        }
    
    
    if (j==i)
        printf("%d\n", i);
    }
    return 0;
}