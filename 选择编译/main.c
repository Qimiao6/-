#define _CRT_SECURE_NO_WARNINGS 1
//常量表达式条件编译
//#include<stdio.h>
//#define __DEBUG__     1 //定义__DEBUG__
//int main()
//{
//	int a = 0;
//	int i[10] = { 1,2,3,4,5,6,7,8,9,10 };
//#ifdef __DEBUG__ //如果__DEBUG__被定义则执行下面的代码
// //只判断是否定义，不赋值值多少都不管
//	for (a = 0; a < 10; a++)
//	{
//		printf("%d\n", i[a]);
//	}
//#endif   //__DEBUG__选择编译结束，
//	return 0;
//}

//            多分支条件编译

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
////extern int Add(int, int);//声明外部函数
//int main()
//{
//	int ch = 0;
//	ch = Add(5, 6);
//	printf("%d\n", ch);
//	return 0;
//}

//            选择编译

//#include<stdio.h>
//
//#define _EE_ 10
//
//int main()
//{
//	int bb = 5;
//#ifdef _EE_   // 它的功能是，如果标识符已被#define命令
//				//定义过则对程序段1进行编译
//	printf("%d\n", bb);
//	printf("_EE_被定义了\n");
//#else			//否则对程序段2进行编译。
//	printf("未定义\n");
//#endif
//}

#include<stdio.h>

#define _EE_ 10

int main()
{
	int bb = 5;
#ifndef _EE_   // 它的功能是，如果标识符"未"被#define命令
				//定义过则对程序段1进行编译
	printf("%d\n", bb);
	printf("_EE_没有被定义\n");
#else			//否则对程序段2进行编译。
	printf("_EE_被定义了\n");
#endif     // #ifndef 和 ifdef 作用相反
}