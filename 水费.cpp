#include <stdio.h>
struct USER
{
int name;
int shui;
int dian;
} U[7], tmp;
int main()
{
int i, shuiz = 0, dianz = 0;
float shuib, dianb;
for (i = 1; i <= 6; i++)
{
printf("请输入第%d个用户的用水量和耗电量:\n", i);
U[i].name = i * 100 + 1;
scanf("%d %d", &U[i].shui, &U[i].dian);
}
printf("请输入水费和电费:");
scanf("%f %f", &shuib, &dianb);
printf("水费标准为%lf，电费标准为%lf\n", shuib, dianb);
printf("用户\t水费\t电费\n");
for (i = 1; i <= 6; i++)
{
printf("%d\t%f\t%f\n", U[i].name, shuib * U[i].shui, dianb * U[i].dian);
shuiz += U[i].shui;
dianz += U[i].dian;
}
printf("总用水量为:%d,总耗电量为:%d\n", shuiz, dianz);
printf("水费总量为:%f电费总量为:%f\n", shuib * shuiz, dianb * dianz);
}