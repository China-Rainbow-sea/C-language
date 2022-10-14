#define  _CRT_SECURE_NO_WARNINGS  1
# include<stdio.h>
#include<ctype.h>

/*
#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld")
        printf("%d\n", a + b);
    }
    return 0;
}
*/
// 题目八:BC8 十六进制转十进制
/*
BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。

输入描述：
无
输出描述：
十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
备注：
printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。
*/
int main1()
{
    printf("%15d", 0xABCDEF);  // 通过0x 十六进制的格式输入 ABCDEF

    return 0;
}




// 题目九: BC9 printf的返回值
/*

描述
KiKi写了一个输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
输入描述：
无
输出描述：
包括两行：
第一行为“Hello world!”
第二行为printf(“Hello world!”)调用后的返回值。
*/

// 方式一:
int main2()
{
    int num = printf("Hello world!");
    printf("\n%d", num);
    return 0;
}


// 方式二:
int main3()
{
    printf("\n%d", printf("Hello world!"));
    return 0;
}


int main()
{
    printf("%d", printf("%d", printf("%d", 43)));

    return 0;
}



// 题目十: BC11 学生基本信息输入输出

/*
    描述
    依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩
    （注：输出成绩时需进行四舍五入且保留2位小数）。
    数据范围：学号满足 1 \le n \le 20000000 \1≤n≤20000000 
    各科成绩使用百分制，且不可能出现负数
    输入描述：
    学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
    输出描述：
    学号，3科成绩，输出格式详见输出样例。
    示例1
    输入：
    17140216;80.845,90.55,100.00
    复制
    输出：
    The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
    复制
    示例2
    输入：
    123456;93.33,99.99,81.20
    复制
    输出：
    The each subject score of No. 123456 is 93.33, 99.99, 81.20.

*/

int main()
{
    int num = 0;
    float f1 = 0;
    float f2 = 0;  
    float f3 = 0;

    // float 格式输入是 %f ,double 格式输入是 %lf ，l 是字母不是数字
    scanf("%d;%f,%f,%f", &num, &f1, &f2, &f3);

    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, f1, f2, f3);
    // 同样的格式输出 float 格式是 %f,double 格式是 %lf, l 不是数字是字母
    return 0;
}


// 题目十一: BC35 判断字母
/*
  描述
    从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
    输入描述：
    输入包括一个字符。
    输出描述：
    输出该字符是字母（YES）或不是（NO）。
    示例1
    输入： H
    输出： YES
    示例2
    输入：9
    输出：NO
*/
// 方式一：
int main()
{
    int c = 0;
    while ((c = getchar()) != EOF)
    {
        getchar();  // 读取掉回车键.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}

// 方式二:
int main()
{
    int c = 0;  // getchar 的返回值是 int 类型

    while ((c = getchar()) != EOF)
    {
        getchar();

        if (isalpha(c))  // isalpha() 判断是否是字母,需要导入头文件#include<ctype.h>
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}




// 题目十二:BC12 字符圣诞树
/*
    描述
    输入一个字符，用它构造一个边长为5的三角形圣诞树。
    数据范围：保证输入的字符是一个 char 类型的值
    输入描述：输入只有一行，一个字符。
    输出描述：该字符构成的三角形圣诞树。
    示例1
    输入：1
    输出：
        1
       1 1
      1 1 1
     1 1 1 1
    1 1 1 1 1
*/
/*
    1
   1 1
  1 1 1
 1 1 1 1
1 1 1 1 1
*/
int main()
{
    char c = getchar();
    // 循环5层
    for (int i = 0; i <= 4; i++)
    {
        // 循环空格
        for (int j = 4 - i; j > 0; j--)
        {
            printf(" ");
        }

        // 循环打印字符
        for (int z = 0; z <= i; z++)
        {
            printf("%c ", c);
        }

        printf("\n");

    }

    return 0;
}


// 题目十三: BC13 ASCII码
/*
。
描述
BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。
BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
输入描述：无
输出描述：一行输出转换题目中给出的所有ASCII码对应的字符，无需以空格隔开。
*/

// 方式一:
int main()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);

    return 0;
}

// 方式二:
int main()
{
    // 数组存放其数值
    int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };

    for (int i = 0; i < 12; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}



// 题目十四:BC14 出生日期输入输出
/*
描述：
输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
数据范围：年份满足 1990 \le y \le 2015 \1990≤y≤2015 ，月份满足 1 \le m \le 12 \1≤m≤12  ，
日满足 1 \le d \le 30 \1≤d≤30
输入描述：
输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
输出描述：
三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。
输出时如果月份或天数为1位数，需要在1位数前面补0。
示例1
输入：20130225
输出：
year=2013
month=02
date=25
备注：通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），
按此宽度截取所需数据；通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。
*/

int main()
{
    int year = 0;
    int month = 0;
    int date = 0;

    scanf("%4d%2d%2d", &year, &month, &date);

    printf("year=%d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", date);

    return 0;
}


// 题目十六:BC29 2的n次方计算
/* 
* 
描述
不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。
数据范围：0 \le n \le 31 \0≤n≤31 
输入描述：一行输入整数n（0 <= n < 31）。
输出描述：输出对应的2的n次方的结果。
示例1
输入：2
输出：4
示例2
输入：10
输出：1024
*/

int main()
{
    int num = 1;
    int n = 0;

    scanf("%d", &n);

    printf("%d\n", num << n); // 注意num 的值并不会发生改变
    return 0;
}




// 题目十七: BC16 字符转ASCII码
/*
描述
BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储
。BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
输入描述：一行，一个字符。
输出描述：一行，输出输入字符对应的ASCII码。
示例1
输入：c
输出：99
*/

int main()
{
    printf("%d", getchar());

    return 0;
}

// 或者
int main()
{
    char c = 0;
    scanf("%c", &c);
    printf("%d", c);

    return 0;
}



// 题目十八: 

/*
BC18 计算带余除法
描述
给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。
输入描述：
一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
输出描述：
一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
示例1
输入：15 2
输出：7 1
*/

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    printf("%d %d", a / b, a % b);

    return 0;
}


// 题目十九:BC17 计算表达式的值
/*
描述
请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212。
输入描述：无。
输出描述：(-8+22)×a-10+c÷2计算之后的结果，为一个整数。
*/
int main()
{
    int a = 40;
    int c = 212;

    printf("%d\n", (-8 + 22) * a - 10 + c / 2);

    return 0;
}