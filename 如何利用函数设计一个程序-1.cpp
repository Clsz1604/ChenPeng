# include <stdio.h>
int main (void)
{
    int val;
    int i;

    scanf("%d", &val);

    for (i = 2; i < val;i++)
    {
        if (0==val%i)
            break;
    }

    if (i==val)
        printf("YES!\n");
    else
        printf("NO!!!\n");

        return 0;
}