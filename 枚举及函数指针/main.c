#define _CRT_SECURE_NO_WARNINGS 1
//			ö�ٵ�ʹ��
#include<stdio.h>
enum JQ
{
	quit,
	ADD,
	SUB
};
void caidan()
{
	printf("* * * * * ���������� * * * * *\n");
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
		printf("��������Ҫ�Ĺ���\n");
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
				printf("���˳�����");
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
	printf("����������ֵ\n");
	scanf("%d%d", &i, &b);
	 bb = p(i , b);
	printf("%d\n", bb);
}