#define _CRT_SECURE_NO_WARNINGS 1
#define N 10
//��ӡ�������
void SetData(int(*a)[N], int n)
{
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		//��һ�кͶԽ����ϵ�Ԫ���ó�1
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (i = 2; i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			//�ӵ����е�2�п�ʼÿ��Ԫ�ؾ�����һ�и��к�ǰһ�������������ĺ�
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
}
void OutData(int(*a)[N], int n)
{
	int i = 0, j = 0;
	printf("�������:\n");
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
//	//����һ������n,���� 1+1/��1-3��+1/��1-3+5��+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))��ֵ
//	int n = 0;
//	int i = 0;
//	int t = 1;
//	//�Ʒ�ĸ��ֵ
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
    //ˮ�ɻ���
    int m = 0, n = 0;
    int i = 0;
    //��λ
    int a = 0;
    //ʮλ
    int b = 0;
    //��λ
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