#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    while (scanf("%d", &i) != EOF)
//    {
//        while (i)
//        {
//            printf("*");
//            i--;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//              寻找x出现次数
//#include<stdio.h>
//int main()
//{
//    int n = 0;//最大值
//    int x = 0;//被找的数
//    long long y = 0;//循环辅助
//    long long i = 0;
//     int a = 0;
//    scanf("%d%d", &n, &x);
//    for (y = 1; y <= n; y++)
//    {
//        i *= 10;
//        i += y;
//    }
//    while (i)
//    {
//        y = i;
//        y %= 10;
//        if (y == x||y==0)
//        {
//            a++;
//        }
//        i /= 10;
//    }
//    printf("%d", a);
//    return 0;
//}
//                 计算语句字符数


#include<stdio.h>
#include<string.h>
int main()
{
    char a[5] = { 0 };
    int i, r;
    r = 0;
    gets(a);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == '\0')
            break;
        if (a[i] != ' ' && a[i] != '\n')
            r++;
    }
    printf("%d", r);
    return 0;
}
