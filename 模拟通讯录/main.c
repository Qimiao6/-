#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"t_x_l.h"
int main()
{
	int i = 0;//ѭ��ѡ�����

	struct binbin mm;//����ͨѶ¼

	init(&mm);//��ʼ��ͨѶ¼
	do
	{
		printf("* * * *   �� �� ͨ Ѷ ¼   * * * *\n");
		printf("* * * *	 1: �½�  2: ����  * * * *\n");
		printf("* * *    3: ����  4: ȫ��ʾ   * * \n");
		printf("* * * *	 5: �޸�  6: ɾ��  * * * *\n");
		printf("\n��������Ҫ�Ĺ���: \n");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
				add(&mm);//�½�
				break;
			case 2:
				qos(&mm);//����(������ĸ)
				break;
			case 3:
				find(&mm);//����
				break;
			case 4:
				show(&mm);//ȫ��ʾ
				break;
			case 5:
				modif(&mm);//�޸�
				break;
			case 6:
				del(&mm);//ɾ��
				break;
			case 0:
				break;
		}
	} while (i);
	return 0;
}