#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//练习1：输入一行数字字符，并用数组来统计每个数字字符的个数
//int main()
//{
//	char arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int temp = 0;
//	int i = 0;
//	printf("enter a number string : ");
//	gets(arr1);
//	int length = strlen(arr1);
//	for (i = 0; i < length; i++)
//	{
//		if (arr1[i] >= '0' && arr1[i] <= '9')
//		{
//			temp = arr1[i] - '0';
//			arr2[temp] = arr2[temp] + 1;
//		}
//	}
//	for (i = 0; i <= length; i++)
//	{
//		printf(" %d : %d\n", i, arr2[i]);
//	}
//	return 0;
//}
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	//设置随机数的起点
//	srand((unsigned int)time(NULL));
//	int arr[10] = { 0 };
//	int i = 0;
//	int n = 0;
//	int temp = 0;
//	int count = 0;
//	int flag = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 50 + 1;
//	}
//	printf("enter a number : ");
//	scanf("%d", &n);
//	printf("移动前: \n");
//	for (i = 0; i < 10; i++)
//	{
//		count++;
//		printf("%d ", arr[i]);
//		if (count % 5 == 0)
//			printf("\n");
//
//	}
//	flag = arr[n];
//	for (i = n; i < 10; i++)
//	{
//		temp = arr[i];
//		arr[i - 1] = arr[i];
//		arr[i] = temp;
//	}
//	arr[i - 1] = flag;
//	printf("移动后:\n");
//	for (i = 0; i < 10; i++)
//	{
//		count++;
//		printf("%d ", arr[i]);
//		if (count % 5 == 0)
//			printf("\n");
//		
//	}
//	return 0;
//}
#define max 10
void MySearch(int* arr, int* item)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < max; i++)
	{
		if (arr[i] % 2 == 1)
		{
			item[j++] = arr[i];
		}
	}
}
//练习：随机输入数字，并把奇数放入另一个数组
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int arr[10] = { 0 };
//	int i = 0;
//	int item[10] = { 0 };
//	int count = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 50 + 1;
//	}
//	MySearch(arr, item);
//	for (i = 0; i < max; i++)
//	{
//		count++;
//		printf("%d ", item[i]);
//		if (count % 3 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
//练习：输入一串字符数据，并按大到小排序
//int main()
//{
//	char arr[max] = { 0 };
//	printf("enter string :");
//	gets(arr);
//	int length = strlen(arr);
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	//冒泡排序
//	for (i = 0; i < length - 1; i++)
//	{
//		for (j = 0; j < length - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < length; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}