#include <math.h>
#include <stdio.h>
int main(void)
{
    double a, b, c;
    double x1, x2;
    double delta;
    char ch;

    do
    {
        printf("请输入该一元二次方程的项数\n");
        printf("a=\n");
        scanf("%lf", &a);

        printf("b=\n");
        scanf("%lf", &b);

        printf("c=\n");
        scanf("%lf", &c);

        delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("该一元二次方程有两个不同的解 x1=%lf,x2=%lf\n", x1, x2);
        }

        else if (0 == delta)
        {
            x1 = x2 = (-b) * (2 * a * c);

            printf("有唯一解 x1=x2=%lf\n", x1, x2);
        }

        else
        {
            printf("无实数解\n");
        }

        printf("您想继续吗(Y/N):\n");
        scanf(" %c", &ch);

    } while ('y'==ch || 'Y'==ch);

    return 0;
}