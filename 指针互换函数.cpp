# include <stdio.h>

void huhuan1(int, int);
void huhuan2(int *, int *);
void huhuan3(int *, int *);

int main (void)
{
    int a = 3;
    int b = 5;

    huhuan3(&a, &b);

    printf("a=%d,b=%d\n", a, b);

    return 0;
}

//不能完成互换程序
void huhuan1 (int a,int b)
{
    int t;
    t = a;
    a = b;
    b = t;

    return;
}

//不能完成互换
void huhuan2 (int *p,int *q)
{
    int *t; //如果要互换p和q的值，则t必须是int * 类型，不能是int 
    t = p;
    p = q;
    q = t;

    return;
}

void huhuan3 (int *p,int *q)
{
    int t; //如果要呼唤*p和*q的值，则不能定义成int *t,否则语句出错
    t = *p; //因为p是int *类型，*p是int类型
    *p = *q;
    *q = t;
}
