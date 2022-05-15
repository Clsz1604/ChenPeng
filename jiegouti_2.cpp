//
// Created by Admin on 2021/9/23.
//
# include <stdio.h>
struct student
{
    int age;
    float score;
    char ch;
};

int main11 (void )
{
   struct student st ={80,66.6f,'f'};
   struct student *pst=&st;
   pst->age=80;
   pst->score=66.6f; //   pst->age ==(*pst).age ==st.age 通用可互换
   st.age=80;

   printf("%d %f \n",pst->age,st.score);

    return 0;
}
