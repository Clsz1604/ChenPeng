//
// Created by Admin on 2021/9/21.
//
# include <stdio.h>
# include <malloc.h>

int main8(void)
{
    int a[5];
    int len;
    int *parr;
    int i;

    // 动态构成一维数组
    printf("请输入你要存放的元素的个数:\n");
    scanf("%d", &len);
    parr = (int *) malloc(4 * len);

    //对一维数组进行操作，  如：对动态一维数组进行赋值
    for (i = 0; i < len; i++)
        scanf("%d", &parr[i]);

    //对一维数组输出
    printf("一维数组的内容是：\n");
    for (i = 0; i < len; i++)
        printf("%d", parr[i]);


    return 0;
}
