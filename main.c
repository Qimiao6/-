#define _CRT_SECURE_NO_WARNINGS 1
//			ָ������
//#include<stdio.h>
//void print()
//{
//	char i[10] = "djdk";
//	//i[0] = "jsdj";
//	printf("%s\n", i);
//}
//int main()
//{
//	int i[4] = { 1,2,3,4 };
//	int b[4] = { 2,3,4,5 };
//	int* p[2] = { i , b };
//	p[0][2] = 9;
//	printf("%d\n", p[0][2]);
//	print();
//	return 0;
//}

//���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char i[101];
//    int n = 0;
//    int j = 0;
//    scanf("%d", &n);
//    for (j = 0; j < n; j++)
//    {
//        scanf("%s", i);
//        int y = 0;
//        int A = 0;
//        while (i[y] != '\0')
//        {
//            if (i[y] >= 65 && i[y] <= 90)//����д
//            {
//                A++;//1
//                break;
//            }
//            y++;
//        }
//        while (i[y] != '\0')//���Сд
//        {
//            if (i[y] >= 97 && i[y] <= 122)
//            {
//                A++;//2
//                break;
//            }
//            y++;
//        }
//        while (i[y] != '\0')//�������
//        {
//            if (i[y] <= 9)
//            {
//                A++;//3
//                break;
//            }
//            y++;
//        }
//        if (strlen(i) >= 8)//��ⳤ��
//            A++;//4
//        if (i[0] >= 10)//�����λ�Ƿ�Ϊ����
//            A++;//5
//        if (A == 5)
//            printf("YES");
//        else
//            printf("NO");
//    }
//}
//                  ��д��ΪСд
//#include <stdio.h>
//int main()
//{
//	char ch[80] = "123abcdEFG*&";
//	int i = printf("*");
//	int j;
//	for (j = 0; ch[j] != '\0'; j++)
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//			ch[j] = ch[j] + 32;
//			//ch[j] = ch[j] + 'e' - 'E';
//	printf("%s", ch);
//	return 0;
//}

//      ͳ�Ʋ�ͬλ
#include<stdio.h>
int convertInteger(int A, int B);
int main()
{
    int a = 29;
    int b = 15;
    convertInteger(a, b);
    return 0;
}
int convertInteger(int A, int B)
{
    A = A ^ B;
    int a = 0;
    int mm = 0;
    while (a < 32)
    {
        if ((A >> a) & 1 == 1)
        {
            mm++;
        }

        a++;
    }
    //printf("%d",mm);
    return mm;
}