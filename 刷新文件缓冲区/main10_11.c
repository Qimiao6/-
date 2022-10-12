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
//	//把格式化的数据写入到字符串中
//	printf("%s\n", str);
//	char str1[] = "lisi 20 33.5";
//	int i = sscanf(str1,"%s%d%f", zhan.str, &(zhan.i), &(zhan.fen));
//	//把字符串中数据按格式写入到变量中
//	printf("%s% d %.2f\n", zhan.str, zhan.i, zhan.fen);
//	return 0;
//}
///                文件的顺序读写
//#include<stdio.h>
//int main()
//{
//	char str[13] = "abc de fggg\n";
//   char str1[13] = "aaaaaaaaaaa\n";
//   char str2[16] = { 0 };
//   char str3[16] = { 0 };
//	FILE* pp = fopen("binbin.txt", "w+");//打开文件
//	if (NULL == pp)
//	{
//		perror("fopen");//报错
//		return 1;
//	}
//	fputs(str1, pp);//将str字符串存到pp指向的文件中
//	fputs(str, pp);
//	fflush(pp);//强制刷新文件缓冲区，把数据存到文件中zhi'x
//	fgets(str2, 14, pp);//读取pp指向的文件数据，并存到str1中
//	fgets(str3, 14, pp);
//	printf("str2=%sstr3=%s", str2, str3);
//	fclose(pp);//关闭文件
//	pp = NULL;
//	return 0;
//}

//         文件的随机读写
//#include<stdio.h>
//int main()
//{
//	FILE* pp = fopen("binbin.txt", "r");
//	if (NULL == pp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fseek(pp, 3, SEEK_SET);//将文件读取指针从起始位置，偏移3个位置
//	char ch = fgetc(pp);
//	printf("%c\n", ch);
//	 ch = fgetc(pp);
//	printf("%c\n", ch);
//	fseek(pp, -2, SEEK_CUR);//将文件读取指针从当前位置，偏移-3个位置
//	 ch = fgetc(pp);//读取一个字符，并且文件指针向后移动一位
//	printf("%c\n", ch);
//	fclose(pp);
//	pp = NULL;
//	return 0;
//}