# include <stdio.h>
void huhuan1 (int ,int );
void huhuan2 (int *,int *);
void huhuan3 (int *,int *);


int main2 (void)
{
    int a=3;
    int b=5;

    huhuan3 (&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

//该函数不能互换
void huhuan1 (int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    return;
}

//该函数不能互换
void huhuan2 (int *p,int *q)
{
    int *t;  //p和q都是int *类型的所以t也是int *类型的
    t=p;
    p=q;
    q=t;
    return;

}

void huhuan3 (int *p,int *q)
{
    int t;  //t是int 类型的，*p也是int 类型的
    t=*p;
    *p=*q;
    *q=t;
    return;
}