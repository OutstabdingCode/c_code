#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���쳲�������
//�ݹ�ʵ��
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
//����ʵ��
int Fibonacci_2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		//a��b�ֱ�Ϊǰ���cΪǰ����֮�ͣ��õ�c����н�������a��b��ֵ
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