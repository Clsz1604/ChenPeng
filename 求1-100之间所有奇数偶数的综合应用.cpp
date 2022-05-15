# include <stdio.h>
int main (void)
{
    int i;
    int l;
    int am = 0;
    int sum1 = 0;
    int sum2 = 0;
    int average = 0;

    for (i = 1; i <= 100;i+=2)
    {
        sum1 = sum1 + i;
        if (i % 2 == 1)
            ++am;
    }

    for (l = 2; l <= 100; l+=2)
    {
        sum2 = sum2 + l;
    }
    average=(sum1 / am);

    printf("1-100之间所有奇数的和 sum1=%d\n", sum1);
    printf("1-100之间所有偶数的和 sum2=%d\n", sum2);
    printf("1-100之间所有奇数的个数 am=%d\n", am);
    printf("1-100之间所有奇数的和的平均数 average=%d\n", average);
    return 0;
}