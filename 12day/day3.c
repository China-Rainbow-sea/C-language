#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
 // #include<math.h>

/* 21 道: BC25 计算体重指数
* 描述
问题：计算BMI指数（身体质量指数）。BMI指数（即身体质量指数，简称体质指数又称体重，英文为Body Mass Index，简称BMI），是用体重公斤数除以身高米数平方得出的数字，
是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。主要用于统计用途，
当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。

数据范围：输入的数据满足 50 \le n \le 180 \50≤n≤180 
输入描述：
一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔。
输出描述：
一行，BMI指数（保留两位小数）。
示例1
输入：70 170
输出 24.22

*/

// 方式一: 
int main1()
{
    int wight = 0;
    int hight = 0;
    double bmi = 0.0;

    scanf("%d %d", &wight, &hight);

    bmi = wight / ((hight / 100.0) * (hight / 100.0));  // 注意最后的结果是浮点数
     // 我们需要通过 100.0 隐式转化为浮点数
    printf("%.2lf\n", bmi);

    return 0;
}


// 方式二: 使用C语言中的标准库函数 pow double pow(double x,double y )

int main2()
{
    int wight = 0;
    int hight = 0;
    double bim = 0.0;

    scanf("%d %d", &wight, &hight);
    bim = wight / pow((hight / 100.0), 2.0); // 注意是浮点数类型,不然
    // int 类型会发生截断。

    printf("%.2lf\n", bim); // 注意浮点数的格式输出是 %lf ,双是 lf， 单是 f

    return 0;
}



/*

22道：BC26 计算三角形的周长和面积
题目

描述
根据给的三角形3条边a, b, c，计算三角形的周长和面积。

数据范围： 0 < a,b,c \le 100000 \0<a,b,c≤100000
输入描述：
一行，三角形3条边（能构成三角形），中间用一个空格隔开。
输出描述：
一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。
示例1
输入：3 3 3
复制
输出：circumference=9.00 area=3.90

*/

// 方式一:
int main3()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float circumference = 0.0;
    float area = 0.0;

    scanf("%d %d %d", &a, &b, &c);

    circumference = a + b + c;
    float p = circumference / 2;  // 注意这里是浮点数类型

    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2f area=%.2f", circumference, area);
    return 0;
}



int main9()
{
    int arr[3] = { 0,0,0 };
    double circumference = 0.0;
    double area = 0.0;
    double p = 0.0;

    for (int i = 0; i < 3; i++)
    {
        int temp = scanf("%d", &temp);
        arr[i] = temp;
    }

    circumference = (double)arr[0] + arr[1] + arr[2];
    p = circumference / 2;
    area = sqrt(p * (p - arr[0]) * (p - arr[1]) * (p - arr[2]));

    printf("circumference=%.2lf area=%.2lf\n", circumference, area);


    return 0;
}



int main()
{
    int num = 0;
    num = scanf("%d",&num); // 不可以这样，scanf 本身就是一个输入的赋值
    printf("%d", num);

    return 0;
}


/*
23道: BC27 计算球体的体积
题目
描述
给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4/3*πr3，其中 π = 3.1415926。
数据范围：输入一个浮点值 0 \le n \le 15 \0≤n≤15

输入描述：
一行，用浮点数表示的球体的半径。
输出描述：
一行，球体的体积，小数点后保留3位。
示例1
输入：3.0
输出：113.097
*/

// 方式二:

int main()
{
    double p = 3.1415926;
    double r = 0.0;  // 注意精度上的问题,float 是不可以的
    scanf("%lf", &r);

    double v = (4.0 / 3) * p * (r * r * r); //
    printf("%.3lf", v);

    return 0;
}


// 方式二:
int main()
{
    double p = 3.1415926;
    double r = 0.0;  // 注意精度上的问题,float 是不可以的
    scanf("%lf", &r);

    double v = (4.0 / 3) * p * pow(r, 3.0);  // 使用math头文件的pow函数实现求立方
    printf("%.3lf", v);

    return 0;
}

/*

24道:BC10 成绩输入输出
描述
输入3科成绩，然后把三科成绩输出，成绩为整数形式。
数据范围： 0 \le n \le 100 \0≤n≤100
输入描述：
一行，3科成绩，用空格分隔，范围（0~100）。
输出描述：
一行，把3科成绩显示出来，输出格式详见输出样例。
示例1
输入：60 80 90
输出：score1=60,score2=80,score3=90
*/
// 方式一：
int main()
{
    int scorel = 0;
    int score2 = 0;
    int score3 = 0;
    scanf("%d %d %d", &scorel, &score2, &score3);

    printf("score1=%d,score2=%d,score3=%d", scorel, score2, score3);
    return 0;
}

// 方式二：
int main()
{
    int arr[] = { 0,0,0 };
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("score1=%d,score2=%d,score3=%d", arr[0], arr[1], arr[2]);
    return 0;
}


/*
25道：BC20 kiki算数
问题：KiKi今年5岁了，已经能够认识100以内的非负整数，并且并且能够进行 100 以内的非负整数的加法计算。
不过，BoBo老师发现KiKi在进行大于等于100的正整数的计算时，规则如下：
1.只保留该数的最后两位，例如：对KiKi来说1234等价于34；
2.如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，
如果此两位中十位为0，则只保留个位。

例如：45+80 = 25
要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a+b 的值。

数据范围： 0 \le a,b \le 2^{31}-1 \0≤a,b≤2^31−1
输入描述：一行，输入两个非负整数a和b，用一个空格分隔。（0 <= a,b<= 231-1）。
输出描述：针对每组输入，输出按照KiKi的运算规则计算出 a+b 的值。
示例1
输入：45 80
输出：25
*/

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    if ((sum / 10 % 10) == 0)
    {
        printf("%d", sum % 10); // 只保留个位,
    }
    else
    {
        printf("%d", sum % 100);
    }

    return 0;
}


/*
26道: BC24 浮点数的个位数字
描述
给定一个浮点数，要求得到该浮点数的个位数。
数据范围： 0 < n \le 200 \0<n≤200
输入描述：一行，包括一个浮点数。
输出描述：一行，包含一个整数，为输入浮点数对应的个位数。
示例1
输入：13.141
输出：3
*/
int main()
{
    float n = 0.0;
    scanf("%f", &n);
    int temp = n;
    printf("%d\n", temp % 10);
    return 0;
}



/*
27道: BC32 你能活多少秒
描述
问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。
数据范围： 0 < age \le 200 \0<age≤200
输入描述：一行，包括一个整数age。
输出描述：一行，包含一个整数，输出年龄对应的秒数。
示例1
输入：20
输出：631200000
*/

int main()
{
    int year = 0;
    long e = 3.156e7;
    scanf("%d", &year);

    printf("%ld", year * e);
    return 0;
}

// 方式二:
int main()
{
    int year = 0;
    scanf("%d", &year);
    long temp = 3.156 * pow(10.0, 7.0); // pow 求什么底数,的几次方

    printf("%ld", year * temp);
    return 0;
}


/*
28道：BC92 变种水仙花
描述
变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),
如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
例如：
655 = 6 * 55 + 65 * 5
1461 = 1*461 + 14*61 + 146*1
求出 5位数中的所有 Lily Number。
输入描述：无
输出描述：一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
*/

int main()
{

    for (int i = 10000; i <= 99999; i++)
    {
        int sum = 0; // 重置防止再次叠加上
        for (int j = 10; j <= 10000; j *= 10)
        {
            sum = sum + (i / j) * (i % j); // 循环取值
        }

        if (i == sum)
        {
            printf("%d ", i);
        }

    }

    return 0;
}