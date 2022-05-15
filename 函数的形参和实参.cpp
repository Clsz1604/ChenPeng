# include <stdio.h>

void f (int i)
{
    printf("%d\n", i);  //i表示函数形参
}

int main (void)
{
    f(5);             //5代表函数的实参
    return 0;
}