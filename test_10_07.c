#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/* 国王将金币作为工资，发放给忠诚的骑士。第一天，骑士收到一枚金币；
之后两天（第二天和第三天），每天收到两枚金币；
之后三天（第四、五、六天），每天收到三枚金币；
之后四天（第七、八、九、十天），每天收到四枚金币……；
这种工资发放模式会一直这样延续下去：当连续N天每天收到N枚金币后，
骑士会在之后的连续N + 1天里，每天收到N + 1枚金币。
请计算在前K天里，骑士一共获得了多少金币。*/
int main()
{
    int k = 0;

    //存放金币的总数量
    int price = 0;
    //发放金币的个数
    int num = 1;
    //当前发放的天数
    int day = 0;
    //输入发放金币的天数
    scanf("%d", &k);

    while (day < k)
    {
        int i = 0;
        //控制发放金币的天数
        for (i = 0; i < num; i++)
        {
            price += num;
            //记录当前的天数
            day++;
            //判断当前天数是否超出总天数k
            if (day >= k)
                break;
        }
        //控制发放金币的数量
        num++;
    }
    //控制发放金币个数
    /*for(num = 1; day <= k; num++)
    {
        int i = 0;
        for(i = 0; i < num; i++)
        {
            if(day > k)
            break;
            price += num;
            day++;
        }
    }*/
    printf("%d", price);
    return 0;
}
/*今天牛牛学到了回文串，他想在数字里面找回文，即回文数，
回文数是正着读与倒着读都一样的数，比如1221，343是回文数，433不是回文数。
请输出不超过n的回文数。*/
int main()
{
    int n = 0, flag = 0, i = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        //记录当前的数
        flag = i;
        //记录反转后的值
        int sum = 0;
        //反转数字
        while (flag)
        {
            int temp = flag % 10;
            sum = sum * 10 + temp;
            flag = flag / 10;
        }
        //判断是否为回文数
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
/*KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。*/
int main()
{
    int num = 0;
    //多组输入，scanf的返回值是正确输入的个数
    while (scanf("%d", &num) == 1)
    {
        int i = 0;
        for (i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正方形图案。*/
int main()
{
    int length = 0;
    while (scanf("%d", &length) == 1)
    {
        int i = 0, j = 0;
        //外循环控制行数
        for (i = 0; i < length; i++)
        {
            //内循环控制每行的个数
            for (j = 0; j < length; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}
/*KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的直角三角形图案。*/
int main()
{
    int row = 0;
    while (scanf("%d", &row) == 1)
    {
        int i = 0, j = 0;
        //外循环控制行数
        for (i = 1; i <= row; i++)
        {
            //内循环控制每行的个数
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}