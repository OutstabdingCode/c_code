#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求解斐波那契数
//递归实现
int Fibonacci_1(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return (Fibonacci_1(n - 1) + Fibonacci_1(n - 2));
}
//迭代实现
int Fibonacci_2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		//a、b分别为前两项，c为前两项之和，得到c后进行交换更新a、b的值
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
//int main()
//{
//	int n = 0;
//	printf("please enter a number:");
//	scanf("%d", &n);
//	//printf("%d\n", Fibonacci_1(n));
//	printf("%d\n", Fibonacci_2(n));
//}