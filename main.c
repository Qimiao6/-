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

///          递归打印数字每一位
#include<stdio.h>
//void print(int x)//方法一
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
 //          求3位数中的质数
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
//           求二维数组中最大值的坐标
//#include<stdio.h>
//int main()
//{
//    int n = 0;//行
//    int m = 0;//列
//    int x = 0;
//    int max = 0;//最大值
//    int y[2];//存储坐标
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

//    判断账号密码
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str1[10];
//    char str2[10];
//    scanf("%s %s", &str1, str2);
//    if (strcmp(str1, "admin")==0)//相等返回0
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

//      青蛙跳台阶
//#include<stdio.h>
//int print(int x)
//{
//    if (x < 2)//小于两格
//        return 1;
//    else
//        return (print(x - 2) + print(x - 1));//可选择跳1/2格
//}
//
//int main()
//{
//    int n = 0;//台阶数
//    scanf("%d", &n);
//    int a = print(n);
//    printf("%d", a);
//    return 0;
//}

//矩阵元素定位

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

//         二维数组中最大值坐标
#include<stdio.h>
int main()
{
    int n = 0;//行
    int m = 0;//列
    int x = 0;//输入数组的值
    int max = 0;//最大值
    int y[2];//储存最大值的坐标
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

