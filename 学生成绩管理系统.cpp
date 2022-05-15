# include <stdio.h>
# include <malloc.h>

struct student 
{
    int age;
    char name[100];
    float score;
};

int main (void)
{
    int i;
    int j;
    int len;
    student *parr;
    struct student t;

    printf("请输入学生的个数信息：\n");
    printf("len=");
    scanf("%d", &len);
    parr = (struct student *)malloc(len * sizeof(struct student));

    //输入学生的信息
    for (i = 0; i < len;i++)
    {
        printf("请输入第%d个学生的信息\n",i+1);
        printf("age=");
        scanf("%d", &parr[i].age);

        printf("name=");
        scanf("%s", parr[i].name);

        printf("score=");
        scanf("%f", &parr[i].score);
    }
    
    // 对学生数据进行排序 （冒泡排序）
    for (i = 0; i < len - 1;i++)
    {
        for (j = 0; j < len - 1 - i;j++)
        {
            if (parr[j].score>parr[j+1].score)
            {
                t = parr[j];
                parr[j] = parr[j + 1];
                parr[j + 1] = t;
            }
        }
    }

        //输入学生的信息
    printf("输出的学生信息是");

    for (i = 0; i < len; i++)
    {
        printf("第%d个学生的信息是\n", i + 1);
        printf("age= %d\n", parr[i].age);

        printf("name= %s\n", parr[i].name);

        printf("score= %f\n", parr[i].score);
        }

        return 0;
}