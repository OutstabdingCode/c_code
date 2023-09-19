#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//实例一：输入一行字符(用回车结束)，输出每个字符对于的ASCII
//	char ch = 0;
//	int i = 0;
//	printf("enter a string: ");
//	while ((ch = getchar()) != '\n')
//	{
//		//每行打印3个
//		if (i % 3 == 0)
//		{
//			printf("\n");
//		}
//		printf(" %c ASCII: %d", ch, ch);
//		i++;
//
//	}
//
//	return 0;
//}
//#define max 100
//int main()
//{
//	//实例二:输入一行数字(用回车结束)，每个数字前后都有空格，把这些数字转换成一个整数
//	char arr[max] = { 0 };
//	int sum = 0;
//	char* temp = arr;
//	printf("enter a string number:");
//	gets(arr);
//	while (*temp)
//	{
//		if(*temp != ' ')
//		{
//			sum = sum * 10 + *temp - 48;
//			
//		}
//		temp++;
//	}
//	printf("sum: %d \n", sum);
//	return 0;
//}

//int main()
//{
//	//实例三：统计输入的行数，用!结束输入,!所在的行数不计入
//	char ch = 0;
//	int count = 0;
//	printf("enter string: ");
//	while ((ch = getchar()) != '!')
//	{
//		if (ch == '\n')
//		{
//			count++;
//		}
//	}
//	printf("count : %d", count);
//	return 0;
//}
//int main()
//{
//	//实例四：统计输入的字符中存在小写字母的个数
//	char  ch = 0;
//	printf("enter string : ");
//	int count = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			count++;
//		}
//	}
//	printf("count : %d", count);
//	return 0;
//}

