//
// Created by Admin on 2021/9/21.
//
# include <stdio.h>
void f (int **q)
{
   int i=5;
   //*q等价于p ,q和**q都不等价于p
   //*q=i; //error 因为 *q=i; 等价于q=i 这样写是错的
   *q=&i; //p=&i

}

int main9 (void)
{
    int *p;
    f(&p);
   printf("%d\n",*p); //该语句逻辑上问题，第十七行代码执行完以后i 就会被释放
    return 0;
}
