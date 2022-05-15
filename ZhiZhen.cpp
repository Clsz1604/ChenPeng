//
// Created by Admin on 2021/9/19.
//
# include <stdio.h>

int main3 (void)
{
    int a [5];
    printf("%d\n",a[0]);

    int b[5]={1,2,3};
    printf("%d,%d\n",b[0],a[4]);

    int c[5]={1,2,3,4,5};
    printf("%d\n",c);
    printf("%d\n",&c[0]);  //数组的取址
    printf("%d\n",*c);
    printf("%d\n",*(c+3));

    if (c[2]==*(c+2))  //推导从c[i]==*(c+i)
    {
        printf("你是的推论是正确的\n");
    }
    else
    {
        printf("你的推论是错误的\n");
    }


    return 0;
}
