#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	//实例四：打印字母金字塔
//	int input = 0;
//	int row = 0;
//	int num;
//	int i = 0;
//	int j = 0;
//	char ch = 'A';
//	printf("enter number: ");
//	scanf("%d", &input);
//	num = 2 * input - 1;
//	row = input;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= (input - i); j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= ((i * 2) - 1); j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//		ch++;
//	}
//	return 0;
//}
int MyMod(int a, int b)
{
	return a % b;
}
double MySum(int n)
{
	int i = 0;
	double temp = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= n; i++)
	{
		
		temp = (1.0 / i) * flag;
		flag = -flag;
		sum += temp;
	}
	return sum;
}
double MyMultiply(int m)
{
	int i = 0;
	double sum = 1.0;
	double temp = 0;
	for (i = 2; i <= m; i++)
	{
		temp = 1 / (pow(i, 2));
		sum -= temp;
	}
	return sum;
}
int MyFunction(int x)
{
	return ((pow(x, 2) - 5 * 2) + 4);
}
void MyPrintf(int row)
{
	int num = 2 * row - 1;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = row - 1; i > 0; i--)
	{
		for (j = 1; j <= row - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	//int a = 0, b = 0;
	//printf("enter number:");
	//scanf("%d%d", &a, &b);
	//printf("%d %% %d = %d\n", a, b, MyMod(a, b));
	//return 0;
	//int n = 0;
	//printf("enter n:");
	//scanf("%d", &n);
	//printf("sum = %lf", MySum(n));
	//return 0;
	//int m = 0;
	//printf("enter m:");
	//scanf("%d", &m);
	//printf("sum = %lf", MyMultiply(m));
	//int x = 0;
	//printf("enter x:");
	//scanf("%d", &x);
	//printf("函数值为: %d", MyFunction(x));
	//int row = 0;
	//printf("enter row:");
	//scanf("%d", &row);
	//MyPrintf(row);
	//return 0;
}

