#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//       ð������
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

//           1/2���ҷ�

//#include<stdio.h>
//int Cz(int* arr, int size_t)
//{
//	int n = 0;
//	int kk = 0;
//	int left = 0;
//	int right = size_t;
//	printf("������Ҫ���ҵ���\n");
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
//		printf("�ҵ���");
//	}
//	else
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}
//                     ѡ�����
//#include<stdio.h>
//#define _gpp_   2
//int main()
//{
//#ifndef _gpp_  //���û������ִ��
//#define _gpp_
//	printf("δ����\n");
//#else         //��������ִ��
//	printf("������");
//#endif
//}

//#include<stdio.h>
////#define dd
//int main()
//{
//#ifdef dd
//	printf("�ѱ�����");
//#else
//#define dd
//	printf("δ������");
//#endif    //����
//}

//                continue��Ӧ��
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
//	if (-1)//��0����ִ��
//	{
//		printf("dsfjhujds");
//	}
//	return 0;
//}

//		�ҳ�n+1 - n ,�����ֵ
//
//int maxProfit(int* prices, int pricesLen)
//{
//    int small = prices[0];
//    int present = 0;
//    int max = 0;
//    int i = 0;
//    for (i = 1; i < pricesLen; i++)
//    {
//        present = prices[i];//��ǰֵ
//        small = small < present ? small : present;//��ǰ��Сֵ
//        max = max > (present - small) ? max : (present - small);//��ǰ
//        //���ֵ����Сֵ��������ֵw
//    }
//    return max;
//}

//           �ҳ��������ִ�����
int FindGreatestSumOfSubArray(int* array, int arrayLen)
{
    int present = 0;
    int i = 0;
    int max = array[0];
    for (i = 0; i < arrayLen; i++)
    {
        present += array[i];//��ǰֵ�ִ�
        if (present > max)//�洢����ִ�ֵ
            max = present;
        if (present < 0)//�ִ�С��0��ֱ�Ӹ�ֵΪ0  //����ǽ������
            present = 0;
    }
    return max;
}