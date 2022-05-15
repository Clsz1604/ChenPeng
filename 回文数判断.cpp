# include <stdio.h>
int main (void)
{
    int val; //存放数据
    int m;
    int sum=0;

    printf("请输入要判断的回文数:\n");
    scanf("%d", &val);

    m = val;
    while(m!=0)
    {
        sum = sum * 10 + m % 10;
        m /= 10;//除10
    }

    if(sum==val)
        printf("YES!\n");
    else
        printf("NO!\n");

    return 0;
}