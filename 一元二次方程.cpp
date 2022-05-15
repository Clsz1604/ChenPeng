# include <stdio.h>
# include <math.h>
int main (void)
{
    float a;
    float b;
    float c;
    printf("请输入该一元二次方程的abc值\n");
    scanf("%f %f %f", &a, &b, &c);

    float detal;
    float x1;
    float x2;
    detal = b * b - (4 * a * c);

    if (detal>0)
    {
        x1 = (-b + sqrt(detal)) / 2 * a * c;
        x2 = (-b - sqrt(detal)) / 2 * a * c;
        printf("该一元二次方程有两个解 x1=%f x2=%f\n", x1, x2);
    }

    else if (detal==0)
    {
        x1 = (-b) / 2 * a * c;
        x2 = x1;
        printf("该一元二次方程有唯一解 x1=x2=%f\n", x1);
    }

    else 
    {
        printf("该一元二次方程无解 \n");
    }

    return 0;

}