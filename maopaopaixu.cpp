//
// Created by Admin on 2021/9/26.
//
# include <stdio.h>

void sort(int*a,int len)
{
    int i,j,t;

    for (i=0;i<len-1;i++)
    {
        for (j=0;j<len-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

int main14 (void)
{
    int a[6]={10,2,8,-8,11,0};
    int i=0;

    sort(a,6);

    for (i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");

    return 0;
}