#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct mm
//{
//	char str[20];
//	int i;
//	float fen;
//};
//int main()
//{
//	char str[30] = { 0 };
//	struct mm zhan = { "zhang san",20,95.6f };
//	sprintf(str, "%s% d %.2f", zhan.str, zhan.i, zhan.fen);//
//	//�Ѹ�ʽ��������д�뵽�ַ�����
//	printf("%s\n", str);
//	char str1[] = "lisi 20 33.5";
//	int i = sscanf(str1,"%s%d%f", zhan.str, &(zhan.i), &(zhan.fen));
//	//���ַ��������ݰ���ʽд�뵽������
//	printf("%s% d %.2f\n", zhan.str, zhan.i, zhan.fen);
//	return 0;
//}
///                �ļ���˳���д
//#include<stdio.h>
//int main()
//{
//	char str[13] = "abc de fggg\n";
//   char str1[13] = "aaaaaaaaaaa\n";
//   char str2[16] = { 0 };
//   char str3[16] = { 0 };
//	FILE* pp = fopen("binbin.txt", "w+");//���ļ�
//	if (NULL == pp)
//	{
//		perror("fopen");//����
//		return 1;
//	}
//	fputs(str1, pp);//��str�ַ����浽ppָ����ļ���
//	fputs(str, pp);
//	fflush(pp);//ǿ��ˢ���ļ��������������ݴ浽�ļ���zhi'x
//	fgets(str2, 14, pp);//��ȡppָ����ļ����ݣ����浽str1��
//	fgets(str3, 14, pp);
//	printf("str2=%sstr3=%s", str2, str3);
//	fclose(pp);//�ر��ļ�
//	pp = NULL;
//	return 0;
//}

//         �ļ��������д
//#include<stdio.h>
//int main()
//{
//	FILE* pp = fopen("binbin.txt", "r");
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fseek(pp, 3, SEEK_SET);//���ļ���ȡָ�����ʼλ�ã�ƫ��3��λ��
//	char ch = fgetc(pp);
//	printf("%c\n", ch);
//	 ch = fgetc(pp);
//	printf("%c\n", ch);
//	fseek(pp, -2, SEEK_CUR);//���ļ���ȡָ��ӵ�ǰλ�ã�ƫ��-3��λ��
//	 ch = fgetc(pp);//��ȡһ���ַ��������ļ�ָ������ƶ�һλ
//	printf("%c\n", ch);
//	fclose(pp);
//	pp = NULL;
//	return 0;
//}