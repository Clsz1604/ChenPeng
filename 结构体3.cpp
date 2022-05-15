# include <stdio.h>
# include <string.h>

struct student
{
	int age;
	char name[100];
	char sex;
};

void InPutStudent(struct student sut);

int main(void)
{
	struct student st;

	InPutStudent (st);

	printf("%d %s %c\n", st.age, st.name, st.sex);
	//OutPutStudent();
	
	return 0;
}

void InPutStudent(struct student sut)
{
	sut.age = 80;
	strcpy(sut.name, "张三");  //不能写成sut.age="张三"
	sut.sex = 'f';
}