//
// Created by Admin on 2021/9/20.
//
# include <stdio.h>
# include <malloc.h>
void f (int *q)
{
    *q=200;
    //free(q);  //把q所指向的内存释放掉
}

int main7 (void)
{
    int *p=(int *) malloc(sizeof(int)); //sizeof(int)表示返回值是int类型所占字节数
    *p=10;

    printf("%d\n",*p);  //10
    f (p);  //P是int * 类型

    printf("%d\n",*p);



    return 0;
}
