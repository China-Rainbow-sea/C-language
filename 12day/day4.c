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


/*
32道:BC31 发布信息
描述
你的手机丢了，在屏幕上输出信息告诉大家。
输入描述：
无
输出描述：
I lost my cellphone!
*/
int main()
{
    printf("I lost my cellphone!\n");

    return 0;
}


/*
33道: BC32 输出学生信息
描述
学生信息管理系统是学校教学管理的重要工具，现有一名学生基本信息如下：姓名-Jack，年龄-18，性别-Man，请按照输出样例的格式输出该学生的信息。
输入描述：
输出描述：
输出分为三行，分别为标题行，分隔行，信息行。
第一行，标题行，每个标题之间间隔4个空格。
第二行，分隔行，一共21个减号"-"。
第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下：
Name Age Gender
---------------------
Jack 18 man
*/



int main() {

    printf("Name    Age    Gender\n");//注意四个空格 和换行
    printf("---------------------\n");
    printf("Jack    18     man\n");//注意五个空格 对齐

    return 0;
}

/*
34道：BC33 计算平均成绩
输入描述：
一行，连续输入5个整数（范围0~100），用空格分隔。
输出描述：
一行，输出5个数的平均数（保留一位小数）。
示例1
输入：75 80 43 67 96
输出：72.2
*/

int main()
{
    double sum = 0.0;
    int arr[5] = { 0 };

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = arr[i] + sum;
    }

    printf("%.1lf", sum / 5.0);

    return 0;
}


/*
35道:BC34 进制A+B
描述
输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果（范围-231~231-1）。
输入描述：
一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
输出描述：
一行，a+b的十进制结果。
示例1
输入：0x12 05
输出：23
备注
十六进制Hexadecimal一般以0x开头，例如0xFF。八进制Octal，一般以0开头，例如07。
*/

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%x %o", &num1, &num2);

    printf("%d\n", num1 + num2);

    return 0;
}


/*
36道:BC37 网购

描述
KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，
如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。

数据范围：衣服价格满足 1 \le val \le 100000 \1≤val≤100000
输入描述：
一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”。
输出描述：
一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
示例1
输入：1000.0 11 11 1
输出：650.00
示例2
输入：999.8 12 12 0
输出：799.84
示例3
输入：66.6 11 11 1
输出：0.00
*/


int main()
{
    double val = 0;
    int month = 0;
    int day = 0;
    int falg = 0;
    float discount = 1;

    scanf("%lf %d %d %d", &val, &month, &day, &falg);

    if (month == 11 && day == 11) // 双11
    {
        discount = 0.7;

    }

    if (month == 12 && day == 12) // 双12
    {
        discount = 0.8;
    }

    double sum = val * discount - falg * 50; // 总和

    if (sum <= 0)
    {
        printf("0.00\n");
    }
    else
    {
        printf("%.2lf\n", sum);
    }

    return 0;
}



/*
37道：BC39 争夺前五名
描述
期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入 n 个学生成绩，输出每组排在前五高的成绩。

数据范围： 5 \le n \le 50 \5≤n≤50  ，成绩采取百分制并不会出现负数
输入描述：
两行，第一行输入一个整数，表示n个学生（>=5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
输出描述：
一行，输出成绩最高的前五个，用空格分隔。
示例1
输入：
6
99 45 78 67 72 88
输出：99 88 78 72 67
示例2
输入：
5
10 20 30 40 50
输出：50 40 30 20 10
*/

int main()
{
    int arr[50] = { 0 };
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 冒泡排序,最后一个不用排序,升序
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)  // 这里我们使用j = 1,防止n-i数组越界的访问.
        { // 小于的往后移动
            if (arr[j - 1] < arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 排序显示 前五个的成绩
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



/*
38道:BC40 竞选社长
描述
假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
输入描述：
一行，字符序列，包含A或B，输入以字符0结束。
输出描述：
一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
示例1
输入：ABBABBAAB0
输出：B
*/
// 方式一:
int main()
{
    char arrs[100] = { 0 };
    gets(arrs);  // 读取字符串

    int i = 0;
    int countA = 0;
    int countB = 0;
    while (arrs[i] != 0 && arrs[i] != EOF)
    {
        if ('A' == arrs[i])
        {
            countA++;
        }

        if ('B' == arrs[i])
        {
            countB++;
        }

        i++;
    }

    if (countA > countB)
    {
        printf("A\n");
    }
    else if (countA == countB)
    {
        printf("E\n");
    }
    else
    {
        printf("B\n");
    }
    return 0;
}


// 方式二:
int main()
{
    char c = 0;
    int countA = 0;
    int countB = 0;
    while ((c = getchar()) != '0')
    {
        if ('A' == c)
        {
            countA++;

        }

        if ('B' == c)
        {
            countB++;
        }

    }

    if (countA < countB)
    {
        printf("B\n");
    }
    else if (countB == countA)
    {
        printf("E\n");
    }
    else
    {
        printf("A\n");
    }
    return 0;
}


// 方式三:
int main()
{
    int flag = 0;
    char c = 0;

    while ((c = getchar()) != '0' && c != EOF)
    {
        if ('A' == c)
        {
            flag++;
        }

        if ('B' == c)
        {
            flag--;
        }

    }

    if (flag > 0)  // 表示 A 字符多了
    {
        printf("A\n");
    }
    else if (0 == flag)  // 表示 A 和 B 的数据同样多
    {
        printf("E\n");
    }
    else
    {
        printf("B\n");
    }

    return 0;
}

