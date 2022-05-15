//
// Created by Admin on 2021/9/21.
//
# include <stdio.h>

struct student
{
    int age;
    float score;
    char sex;
};

int main10 (void)
{
   struct student st={80,99.9F,'f'};
   struct student st2;
   st2.age=10;
   st2.score=88;
   st2.sex='f';



   printf("%d %f %c\n",st.age,st.score,st.sex);
   printf("%d %f %c\n",st2.age,st2.score,st2.sex);

    return 0;
}
