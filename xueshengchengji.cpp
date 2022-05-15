//
// Created by Admin on 2021/9/26.
//
# include <stdio.h>
# include <malloc.h>

struct student
{
    int age;
    char name[100];
    float score;

};

int main15 (void)
{
    int len;
    student *parr;
    int i;
    int j;
    struct student t;
    // 动态构建学生数组
    printf("请输入学生的个数-！\n");
    printf("len=");
    scanf("%d",&len);
    parr=(struct student *)malloc(len*sizeof(struct student ));

    //输入
    for (i=0;i<len;i++)
    {
        printf("请输入第%d个学生的信息：\n",i+1);
        printf("age=");
        scanf("%d",&parr[i].age);

        printf("name=");
        scanf("%s",parr[i].name);  //name是数组名其本身就是元素的首位,不能改成&parr[i].name

        printf("score=");
        scanf("%f",&parr[i].score);
    }

    //按学生成绩排序
    for (i=0;i<len-1;i++)
    {
        for (j=0;j<len-1-i;i++)
        {
            if (parr[j].score>parr[j+1].score);
            {
                t=parr[j];
                parr[j]=parr[j+1];
                parr[j+1]=t;
            }
        }
    }

    //输出
    printf("\n\n学生的信息是：\n");
    for (i=0;i<len;i++)
    {
        printf("第%d个学生的信息是：\n",i+1);
        printf("age= %d\n",parr[i].age);

        printf("name= %s\n",parr[i].name);

        printf("score= %f\n",parr[i].score);

    }


    return 0;
}
