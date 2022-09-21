#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"t_x_l.h"
int main()
{
	int i = 0;//循环选择变量

	struct binbin mm;//创建通讯录

	init(&mm);//初始化通讯录
	do
	{
		printf("* * * *   斌 斌 通 讯 录   * * * *\n");
		printf("* * * *	 1: 新建  2: 排序  * * * *\n");
		printf("* * *    3: 查找  4: 全显示   * * \n");
		printf("* * * *	 5: 修改  6: 删除  * * * *\n");
		printf("\n请输入需要的功能: \n");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
				add(&mm);//新建
				break;
			case 2:
				qos(&mm);//排序(按首字母)
				break;
			case 3:
				find(&mm);//查找
				break;
			case 4:
				show(&mm);//全显示
				break;
			case 5:
				modif(&mm);//修改
				break;
			case 6:
				del(&mm);//删除
				break;
			case 0:
				break;
		}
	} while (i);
	return 0;
}