#define _CRT_SECURE_NO_WARNINGS 1
//�������ʽ��������
//#include<stdio.h>
//#define __DEBUG__     1 //����__DEBUG__
//int main()
//{
//	int a = 0;
//	int i[10] = { 1,2,3,4,5,6,7,8,9,10 };
//#ifdef __DEBUG__ //���__DEBUG__��������ִ������Ĵ���
// //ֻ�ж��Ƿ��壬����ֵֵ���ٶ�����
//	for (a = 0; a < 10; a++)
//	{
//		printf("%d\n", i[a]);
//	}
//#endif   //__DEBUG__ѡ����������
//	return 0;
//}

//            ���֧��������

//#include<stdio.h>
//int main()
//{
//	int i = 2;
//#if i > 2
//	printf("haha\n");
//#elif i > 3
//	printf("hehe\n");
//#else
//	printf("xixi\n");
//#endif
//}

//#include<stdio.h>
////#define MAX 
//int main()
//{
//	int i = 0;
//#if defined(MAX)
//		printf("haha\n");
//#elif !defined(MAX)
//		printf("xixi\n");
//#endif
//		return 0;
//}
//
//

//struct mm
//{
//	char a;
//	int b;
//	char c;
//	short d;
//};
//#include<stdio.h>
//#include"binbin.h"
////extern int Add(int, int);//�����ⲿ����
//int main()
//{
//	int ch = 0;
//	ch = Add(5, 6);
//	printf("%d\n", ch);
//	return 0;
//}

//            ѡ�����

//#include<stdio.h>
//
//#define _EE_ 10
//
//int main()
//{
//	int bb = 5;
//#ifdef _EE_   // ���Ĺ����ǣ������ʶ���ѱ�#define����
//				//�������Գ����1���б���
//	printf("%d\n", bb);
//	printf("_EE_��������\n");
//#else			//����Գ����2���б��롣
//	printf("δ����\n");
//#endif
//}

#include<stdio.h>

#define _EE_ 10

int main()
{
	int bb = 5;
#ifndef _EE_   // ���Ĺ����ǣ������ʶ��"δ"��#define����
				//�������Գ����1���б���
	printf("%d\n", bb);
	printf("_EE_û�б�����\n");
#else			//����Գ����2���б��롣
	printf("_EE_��������\n");
#endif     // #ifndef �� ifdef �����෴
}