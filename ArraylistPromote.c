#define _CRT_SECURE_NO_WARNINGS 1
#define N 10
//打印杨辉三角
void SetData(int(*a)[N], int n)
{
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		//第一列和对角线上的元素置成1
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (i = 2; i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			//从第三行第2列开始每个元素就是上一行该列和前一列相邻两个数的和
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
}
void OutData(int(*a)[N], int n)
{
	int i = 0, j = 0;
	printf("杨辉三角:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
}
//int main()
//{
//	int a[N][N] = { 0 }, n = 7;
//	SetData(a, n);
//	OutData(a, n);
//	return 0;
//}

//int main()
//{
//	//输入一个整数n,计算 1+1/（1-3）+1/（1-3+5）+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))的值
//	int n = 0;
//	int i = 0;
//	int t = 1;
//	//计分母的值
//	int temp = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		temp += (2 * i - 1) * t;
//		sum += 1.0 / temp;
//		t = -t;
//	}
//	printf("%.3lf", sum);
//	return 0;
//}
int main()
{
    //水仙花束
    int m = 0, n = 0;
    int i = 0;
    //个位
    int a = 0;
    //十位
    int b = 0;
    //百位
    int c = 0;
    int flag = 0;
    while (scanf("%d %d", &m, &n) == 2)
    {
        flag = 1;
        for (i = m; i <= n; i++)
        {
            a = i % 10;
            b = (i / 10) % 10;
            c = i / 100;
            if ((pow(a, 3) + pow(b, 3) + pow(c, 3)) == i)
            {
                printf("%d ", i);
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("no");
        }
    }
    return 0;
}