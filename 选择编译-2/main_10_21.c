#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//       冒泡排序
//void maop(int* str, int size_t)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0; x < size_t - 1; x++)
//	{
//		for (y = 0; y < size_t - 1 ; y++)
//		{
//			if (*(str + y) > *(str + y + 1))
//			{
//				int ch = *(str + y);
//				*(str + y  ) = *(str + y + 1);
//				*(str + y + 1) = ch;
//			}
//
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int pp[10] = { 2,5,1,8,3,9,4,6,7,2 };
//	int size = sizeof(pp) / sizeof(pp[1]);
//	maop(pp, size);
//	for(i = 0; i < size; i++)
//	{
//		printf("%d ", pp[i]);
//
//	}
//	return 0;
//}

//           1/2查找法

//#include<stdio.h>
//int Cz(int* arr, int size_t)
//{
//	int n = 0;
//	int kk = 0;
//	int left = 0;
//	int right = size_t;
//	printf("请输入要查找的数\n");
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		kk = (left + right) / 2;
//		if (arr[kk] < n)
//		{
//			left = kk + 1;
//		}
//		else if (arr[kk] > n)
//		{
//			right = kk - 1;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 3,6,9,11,14,17,19,20,33,45 };
//	int size = sizeof(arr) / sizeof(arr[1]);
//	if (Cz(arr, size))
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}
//                     选择编译
//#include<stdio.h>
//#define _gpp_   2
//int main()
//{
//#ifndef _gpp_  //如果没定义则执行
//#define _gpp_
//	printf("未定义\n");
//#else         //不满足则执行
//	printf("定义了");
//#endif
//}

//#include<stdio.h>
////#define dd
//int main()
//{
//#ifdef dd
//	printf("已被定义");
//#else
//#define dd
//	printf("未被定义");
//#endif    //结束
//}

//                continue的应用
//#include<stdio.h>
//struct A
//{
//	int age;
//	int num;
//}a,*p;
//
//int main()
//{
//
//	if (-1)//非0都会执行
//	{
//		printf("dsfjhujds");
//	}
//	return 0;
//}

//		找出n+1 - n ,的最大值
//
//int maxProfit(int* prices, int pricesLen)
//{
//    int small = prices[0];
//    int present = 0;
//    int max = 0;
//    int i = 0;
//    for (i = 1; i < pricesLen; i++)
//    {
//        present = prices[i];//当前值
//        small = small < present ? small : present;//当前最小值
//        max = max > (present - small) ? max : (present - small);//当前
//        //最大值减最小值，的最大差值w
//    }
//    return max;
//}

//           找出数组中字串最大和
int FindGreatestSumOfSubArray(int* array, int arrayLen)
{
    int present = 0;
    int i = 0;
    int max = array[0];
    for (i = 0; i < arrayLen; i++)
    {
        present += array[i];//当前值字串
        if (present > max)//存储最大字串值
            max = present;
        if (present < 0)//字串小于0，直接赋值为0  //这段是解题核心
            present = 0;
    }
    return max;
}