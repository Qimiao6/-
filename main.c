#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int i, j = 0, k = 1, n, temp;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        temp = k;
//        k = k + j;
//        j = temp;
//    }
//    printf("%d", k);
//}

///          �ݹ��ӡ����ÿһλ
#include<stdio.h>
//void print(int x)//����һ
//{
//	if (x < 10)
//	{
//		printf("%d ", x);
//	}
//	else
//	{
//		print(x / 10);
//		printf("%d ", x % 10);
//	}
//}
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}
 //          ��3λ���е�����
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    int a, j;
//    int y = 0;
//    int count = 0;
//    for (a = 100; a < 999; a++)
//    {
//        for (j = 2; j < a; j++)
//        {
//
//            if (a % j == 0)
//            {
//                break;
//            }
//        }
//        if (a == j)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//           ���ά���������ֵ������
//#include<stdio.h>
//int main()
//{
//    int n = 0;//��
//    int m = 0;//��
//    int x = 0;
//    int max = 0;//���ֵ
//    int y[2];//�洢����
//    int i = 0;
//    int j = 0;
//    scanf("%d%d", &n, &m);
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= m; j++)
//        {
//            scanf("%d", &x);
//            if (x > max)
//            {
//                max = x;
//                y[0] = i;
//                y[1] = j;
//            }
//        }
//    }
//    printf("%d %d", y[0], y[1]);
//    return 0;
//}

//    �ж��˺�����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str1[10];
//    char str2[10];
//    scanf("%s %s", &str1, str2);
//    if (strcmp(str1, "admin")==0)//��ȷ���0
//    {
//        if (strcmp(str2, "admin")==0)
//        {
//            printf("Login Success!");
//            return 0;
//        }
//    }
//    printf("Login Fail!");
//    return 0;
//}

//      ������̨��
//#include<stdio.h>
//int print(int x)
//{
//    if (x < 2)//С������
//        return 1;
//    else
//        return (print(x - 2) + print(x - 1));//��ѡ����1/2��
//}
//
//int main()
//{
//    int n = 0;//̨����
//    scanf("%d", &n);
//    int a = print(n);
//    printf("%d", a);
//    return 0;
//}

//����Ԫ�ض�λ

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int i[26][26];
//    int a = 0;
//    int b = 0;
//    for (a = 0; a < n; a++)
//    {
//        for (b = 0; b < m; b++)
//        {
//            scanf("%d", &i[a][b]);
//        }
//    }
//    scanf("%d%d", &a, &b);
//    printf("%d", i[a - 1][b - 1]);
//    return 0;
//}
//

//         ��ά���������ֵ����
#include<stdio.h>
int main()
{
    int n = 0;//��
    int m = 0;//��
    int x = 0;//���������ֵ
    int max = 0;//���ֵ
    int y[2];//�������ֵ������
    int i = 0;
    int j = 0;
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &x);
            if (x > max)
            {
                max = x;
                y[0] = i;
                y[1] = j;
            }
        }
    }
    printf("%d %d", y[0], y[1]);
    return 0;
}

