# include <stdio.h>
# include <stdbool.h>

bool isprime (int val)
{
    int i;
    for (i = 2; i < val;i++)
    {
        if (val%i==0)
            break;
    }

    if (i==val)
        return true;
    
    else
        return false;
}

int main (void)
{
    int m;
    
    scanf("%d", &m);

    if (isprime(m))
        printf("YES!\n");
    
    else
        printf("NO!\n");

    return 0;
}
