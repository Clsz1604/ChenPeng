# include <stdio.h>

struct student
{
    int age;
    float score;
    char sex;
};

int main (void)
{
    struct student st = {80, 66.6, 'f'};
    printf("%d %f %c\n", st.age, st.score, st.sex);

    return 0;
}