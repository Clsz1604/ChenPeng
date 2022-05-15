# include <stdio.h>
int main (void)
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int cut = 0;  //"求个数"
    float avg = 0; //"求平均值"

    for (i = 1; i < 101; ++i)
    {
        if (i % 2 == 1)
        {
            sum1 = sum1 + i;
            ++cut;
        }
        else
        {
            sum2 = sum2 + i;
        }
    }
    avg = 1.0*sum1 / cut;
    printf("sum1=%d\n", sum1);
    printf("sum2=%d\n", sum2);
    printf("cut=%d\n", cut);
    printf("avg=%f\n", avg);

    return 0;
}