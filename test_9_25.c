#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int a = 0;
//    int ret = 0;
//    int b = 0, temp = 0, sum = 0, count = 1;
//    for (i = 10000; i < 100000; i++)
//    {
//        ret = i;
//
//        while (ret)
//        {
//            //求前n位
//            a = ret / 10;
//            //求后n位
//            b = i % (int)(pow(10, count));
//            temp = a * b;
//            sum += temp;
//            ret = ret / 10;
//            count++;
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

int main()
{
    int i, j;
    for (i = 10000; i < 99999; i++)
    {
        int sum = 0;
        for (j = 10; j <= 10000; j = 10 * j)
        {
            sum += (i / j) * (i % j);
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
