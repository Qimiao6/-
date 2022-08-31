#define _CRT_SECURE_NO_WARNINGS 1
//    数组指针
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int(*pp)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pp)[i]);
//	}
//	printf("\n");
//	int* p = arr;//接收首地址
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}


//              指针数组

//#include<stdio.h>
//int main()
//{
//	int a = 7;
//	int b = 6;
//	int* pa = &a;
//	int* pb = &b;
//	int* pp[2] = { pa,pb };//指向指针的数组
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", *pp[i]);
//	}
//	return 0;
//}

//          左旋右旋

#include<stdio.h>
void left()
{
	int arr[5] = { 0 };
	int a = 0;
	int x = 0;
	printf("请输入一个5位数的数组\n");
	for (a = 0; a < 5; a++)
	{
		scanf("%d", &arr[a]);
	}
	int i = 0;
	printf("请选择左旋转个数\n");
	scanf("%d", &i);
	int sz = sizeof(arr)/ sizeof(arr[0]) ;
	for (a = 0; a < i; a++)
	{
		//int b = arr[0];
		for (x = 0; x < sz - 1-a; x++)
		{
			int m = arr[x];
			arr[x] = arr[x + 1];
			arr[x + 1] = m;
		}
	}
	for (a = 0; a < sz; a++)
	{
		printf("%d ", arr[a]);
	}
}
void rig()
{
	int arr[5] = { 0 };
	int a = 0;
	int x = 0;
	printf("请输入一个5位数的数组\n");
	for (a = 0; a < 5; a++)
	{
		scanf("%d", &arr[a]);
	}
	int i = 0;
	printf("请选择右旋转个数\n");
	scanf("%d", &i);
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (a = 0; a < i; a++)
	{
		for (x = sz-1; x > 0; x--)
		{
			int m = arr[x];
			arr[x] = arr[x - 1];
			arr[x - 1] = m;
		}
	}
	for (a = 0; a < sz; a++)
	{
		printf("%d ", arr[a]);
	}
}
int main()
{
	int i = 0;
	do
	{
		printf("\n********** 请选择模式 *********\n");
		printf("**********   1 左旋   *********\n");
		printf("**********   2 右旋   *********\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			left();
			break;
		case 2:
			rig();
			break;
		case 0:
			printf("退出");
			break;
		}
	} while (i);
	
}
