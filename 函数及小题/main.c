#define _CRT_SECURE_NO_WARNINGS 1

//          回调函数
#include<stdio.h>
//int Add(int a ,int b)
//{
//	return a + b;
//}
//int mui(int a, int b)
//{
//	return a - b;
//}
//void mlu(int(*pp)(int x, int y))
//{
//	int a, b;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", pp(a, b));
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("************** 请选择计算方式 **************\n");
//		printf("************** 1:加   2:减    **************\n");
//		printf("************** 请选择计算方式 **************\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//			case 1:
//				mlu(Add);
//				break;
//			case 2:
//				mlu(mui);
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//		}
//	} while (i);
//}

//int x = 5, y = 7;
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//} 
//int main()
//{
//	//int x = 3, y = 8;//
//	//int y[5 + 3] = { 0, 1, 3, 5, 7, 9 };
//	char c2[] = { '\x10', '\xa', '\8' };
//	swap();
//	//printf("%d,%d\n",x, y);
//	return 0;
//}

//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//
//#include<stdio.h>
//int main()
//{
//	int m = 7;
//	a = &m;
//	c = &m;
//	printf("%d %d\n", *c, *a);
//	printf("%d %d\n", *c, *a);
//	printf("sfdjs");
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int m = 1;
//	int a = 9;
//	int b = 9;
//	(m) ? (a++) : (a--);
//	(m!=0) ? (b++) : (b--);
//	int x;
//	char c[10];
//	scanf("%d%s", &x, &c);
//	printf("%d %d\n", a, b);
//	printf("%d %s", x, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	printf("%c\n", '\123');
//	//printf("%c\n", '\t');
//
//	return 0;
//}
//其实NUM= (M+1)*M/2这里只是做了个简单的文本替换NUM=(N+1+1)*N+1/2 = 8；
//由于我们此处是整型运算，所以结果是等于8。
//#include <stdio.h>
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d %d\n", N,M);
//	printf("%d\n", NUM);
//	return 0;
//}
// //           计算n的值
//#include<stdio.h>
//int main()
//{
//	int i = f(1);
//	printf("%d", i);
//	return 0;
//}
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}

//函数

#include<stdio.h>
//char i[10] = { "qweuiop" };
//int a = 5;
//int fun(char b[10], int* a)
//{
//	int i = 0;
//	//printf("%s\n", b);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c", b[i]);
//	}
//	printf("\n%d", *a);
//	return 0;
//}
//int main()
//{
//	fun(i, &a);//i本身就是首元素地址
//	return 0;
//}
//#include <stdio.h>
//int i;//注意分析题目i是全局变量
//void prt()
//{
//	for (i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//} 
//int main()
//{
//	for (i = 5; i <= 8; i++)
//		prt();
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	printf("%d\n", (a += a -= a * a));
//	for (; 0;) 
//	{
//		printf("ds");
//	}
//	return 0;
//}

//int main()
//{
//	int m, n;
//	printf("Enter m,n;");
//	scanf("%d%d", &m, &n);
//	while (m != n) //1
//	{
//		while (m > n) m = m - n; //2
//		while (n > m) n = n - m; //3
//	}
//	printf("m=%d\n", m);
//	return 0;
//}
//             奇怪的升序排序
//int main()
//{
//	int a[] = { 4, 0, 2, 3, 1 }, i, j, t;
//	for (i = 1; i < 5; i++)
//	{
//		t = a[i];
//		j = i - 1;
//		while (j >= 0 && t < a[j])
//		{
//			a[j + 1] = a[j];
//			--j;
//		} 
//		a[j + 1] = t;
//	}
//		for (i = 1; i < 5; i++)
//	{
//			printf("%d", a[i]);
//	}
//		return 0;
//
//}

#include<stdio.h>
int main()
{
	char i[10] = "dhsfhf";
	return 0;
}

