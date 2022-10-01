#define _CRT_SECURE_NO_WARNINGS 1
//			枚举的使用
#include<stdio.h>
enum JQ
{
	quit,
	ADD,
	SUB
};
void caidan()
{
	printf("* * * * * 冰棒计算器 * * * * *\n");
	printf("* * * * *   0: quit  * * * * *\n");
	printf("* * * * *   1: ADD   * * * * *\n");
	printf("* * * * *   2: SUB   * * * * *\n");

}
int add(int a, int b);
int sub(int a, int b);
void nul(int(*p)(int x, int y));
int main()
{
	int i = 0;
	do
	{
		caidan();
		printf("请输入需要的功能\n");
		scanf("%d", &i);
		switch (i)
		{
			case ADD:
				nul(add);
				break;
			case SUB:
				nul(sub);
				break;
			case quit:
				printf("已退出程序");
				break;
		}
	} while (i);
	return 0;
}
int add(int a,int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
void nul(int(*p)(int x, int y))
{
	int i, b;
	int bb = 0;
	printf("请输入两个值\n");
	scanf("%d%d", &i, &b);
	 bb = p(i , b);
	printf("%d\n", bb);
}