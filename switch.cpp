#include <stdio.h>
int main(void)
{
    int val;
    printf("请输入层数\n");
    scanf ("%d", &val);

    switch (val)
    {
    case 1:
            printf("一层开\n");
            break;

    case 2:
                printf("二层开\n");
                break;

    case 3:
                    printf("三层开\n");
                    break;

    default:
                    printf("还没有盖到这一层\n");
                    break;
    }

    return 0;
}