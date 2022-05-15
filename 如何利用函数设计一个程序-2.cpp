# include <stdio.h>
# include <stdbool.h>

bool isprime (int val)
{
    int i; 

    for (i = 2; i < val;i++)
    {
        if (0==val%i)
            break;
    }

    if (i==val)
        return true;
    else
        return false;
}


int main (void)
{
    int i;
    int val;

    scanf("%d", &val);

    if (isprime(val))
        printf("YES!\n");
    else
        printf("NO!\n");

    return 0;
}