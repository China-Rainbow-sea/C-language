#define  _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
/*
* 
29道: BC23 时间转换
描述
给定秒数 seconds ，把秒转化成小时、分钟和秒。
数据范围： 0 < seconds < 100000000\0<seconds<100000000
输入描述：一行，包括一个整数，即给定的秒数。
输出描述：
一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
示例1
输入：3661
输出：1 1 1
*/


int main()
{
    int seconds = 0;
    scanf("%d", &seconds);

    int h = seconds / 60 / 60;  // 小时
    int m = seconds / 60 % 60;  // 分钟
    int s = seconds % 60;     // 秒

    printf("%d %d %d", h, m, s);
    return 0;
}

// 方式二:
#include <stdio.h>

int main()
{
    int seconds = 0;
    scanf("%d", &seconds);

    int h = seconds / 3600;  // 小时
    int m = (seconds - h * 3600) / 60;  // 分钟
    int s = seconds - h * 3600 - m * 60;     // 秒

    printf("%d %d %d", h, m, s);
    return 0;
}


/*
30道: BC24 总成绩和平均分计算
描述
依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩。
输入描述：
一行，3科成绩，成绩之间用一个空格隔开。
输出描述：
一行，总成绩和平均成绩（小数点后保留两位），用一个空格隔开。
示例1
输入：79.5 80.0 98.0
输出：257.50 85.83
*/
// 方式一：
int main()
{
    double gender1 = 0.0;
    double gender2 = 0.0;
    double gender3 = 0.0;

    scanf("%lf %lf %lf", &gender1, &gender2, &gender3); // doubel的格式输入输入是 %lf
    double sum = gender1 + gender2 + gender3;
    printf("%.2lf %.2lf", sum, sum / 3);

    return 0;
}

// 方式二: 
int main()
{
    double genders[3] = { 0 };
    double sum = 0.0;

    for (int i = 0; i < sizeof(genders) / (sizeof(int)); i++)
    {
        scanf("%lf", &genders[i]);
        sum += genders[i];
    }

    printf("%.2lf %.2lf", sum, sum / 3);

    return 0;
}



/*
31道: BC30 KiKi和酸奶
描述
BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。
KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
输入描述：
多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。
输出描述：
针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。
示例1
输入：8 5 16
输出：4 
*/

// 方式一:
int main()
{
    int n = 0;
    int h = 0;
    int m = 0;


    while (scanf("%d %d %d", &n, &h, &m) != EOF)
    {
        int sum = 0;
        if (m % h > 0)  // 表示kiki正在喝酸奶,
        {
            sum = m / h + 1; // 加上kiki正在喝的这瓶酸奶
        }
        else            // 表示kiki不在喝酸奶
        {
            sum = m / h;
        }

        printf("%d\n", n - sum);
    }
    return 0;
}

// 方式二:
int main()
{
    int n = 0;
    int h = 0;
    int m = 0;


    while (~scanf("%d %d %d", &n, &h, &m))
    {
        int sum = 0;
        if (m % h > 0)  // 表示kiki正在喝酸奶,
        {
            sum = m / h + 1; // 加上kiki正在喝的这瓶酸奶
        }
        else            // 表示kiki不在喝酸奶
        {
            sum = m / h;
        }

        printf("%d\n", n - sum);
    }
    return 0;
}
