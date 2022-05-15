//
// Created by Admin on 2021/9/25.
//
/*
# include <stdio.h>
# include <cstring>

struct student
{
    int age ;
    char sex;
    char name[100];
};
void InPutStudent (struct student stu);

int main12 (void)
{
   struct Student st;

   InPutStudent (&st); //对结构体变量输入
   //printf("%d %c %s\n",st.age,st.sex,st.age);
   //OutPutstudent();


    return 0;
}

void InPutStudent (struct student *pust)
{
    (*pust).age =10;
    strcpy(pust->name,"张三");  //不能写成stu.name=”张三“
    pust->sex='f';
}
*/