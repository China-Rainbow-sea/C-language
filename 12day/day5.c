#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

/*
39道:BC41 你是天才吗？
描述
据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
输入描述：
多组输入，每行输入包括一个整数表示的智商。
输出描述：
针对每行输入，输出“Genius”。
示例1
输入：160
输出：Genius
*/
int main()
{
    int genius = 100;
    scanf("%d", &genius);

    if (genius >= 140)
    {
        printf("Genius\n");
    }

    return 0;
}



/*
40道:OBC42 完美成绩
描述
KiKi想知道他的考试成绩是否完美，请帮他判断。从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。

输入描述：
多组输入，每行输入包括一个整数表示的成绩（90~100）。
输出描述：
针对每行输入，输出“Perfect”。
示例1
输入：98
输出：Perfect
*/

int main()
{
    int perfect = 0;
    scanf("%d", &perfect);

    if (perfect >= 90 && perfect <= 100)
    {
        printf("Perfect\n");
    }
    return 0;
}


/*

41道: BC43 及格分数
描述
KiKi想知道他的考试分数是否通过，请帮他判断。从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
输入描述：
多组输入，每行输入包括一个整数表示的分数（0~100）。
输出描述：
针对每行输入，输出“Pass”或“Fail”。
示例1
输入：94
输出：Pass
示例2
输入：44
输出：Fail
*/

int main()
{
    int gender = 0;
    while (~scanf("%d", &gender)) // 或者 scanf("%d",&gender) != EOF
    {
        if (gender >= 60)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }

    return 0;
}

/*
42道: BC44 判断整数奇偶性
描述
KiKi想知道一个整数的奇偶性，请帮他判断。从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。
输入描述：
多组输入，每行输入包括一个整数。
输出描述：
针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
示例1
输入：
4
7
输出：
Even
Odd
*/

int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF) // 或者~scanf("%d",num)对EOF(-1)取反,为 0 假
    {
        if (num % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }

    }
    return 0;
}



/*
43道: BC45 最高分数
描述
KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
数据范围： 0 \le n \le 100 \0≤n≤100
输入描述：
输入一行包括三个整数表示的分数（0~100），用空格分隔。
输出描述：
输出为一行，即三个分数中的最高分。
示例1
输入：
94 98 99
输出：99
示例2
输入：100 88 60
输出：100
*/

// 方式一:
int main()
{
    int gender1 = 0;
    int gender2 = 0;
    int gender3 = 0;

    scanf("%d %d %d", &gender1, &gender2, &gender3);

    int max = gender1 > gender2 ? gender1 : gender2;
    max = max > gender3 ? max : gender3;

    printf("%d", max);

    return 0;
}


// 方式二:
int main()
{
    int arr[3] = { 0 };
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        // max = arr[0];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    return 0;
}