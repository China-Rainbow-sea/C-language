#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
#include<ctype.h>

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



/*
44道:BC46 判断是元音还是辅音
描述
KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
输入描述：
多组输入，每行输入一个字母。
输出描述：
针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”。
示例1
输入：
A
b
输出：
Vowel
Consonant
*/


// 方式一
int main()
{
    char c = 0;
    char arrs[] = "AEIOUaeiou";  // 创建数组存储元音信息
    while (scanf("%c", &c) != EOF)  // 多组输入 或者是 ~scanf("%d",&c)
    {
        int i = 0;
        for (i = 0; i < sizeof(arrs) / sizeof(char); i++)
        {
            if (c == arrs[i])
            {
                printf("Vowel\n");
                break;
            }
        }

        if (i == sizeof(arrs) / sizeof(char))
        {
            printf("Consonant\n");
        }

        getchar();  // 读取到空格,多组输入
    }

    return 0;
}



// 方式二

int main()
{
    char c = 0;
    char arrs[] = "AEIOUaeiou";  // 创建数组存储元音信息
    while ((c = getchar()) != EOF)  // 多组输入 或者是 ~scanf("%d",&c)
    {
        int i = 0;
        for (i = 0; i < sizeof(arrs) / sizeof(char); i++)
        {
            if (c == arrs[i])
            {
                printf("Vowel\n");
                break;
            }
        }

        if (i == sizeof(arrs) / sizeof(char))
        {
            printf("Consonant\n");
        }

        getchar();  // 读取到空格,多组输入
    }

    return 0;
}



// 方式三:
int main()
{
    char arrs[] = "AEIOUaeiou";
    char c = 0;
    while (~scanf("%c\n", &c))  // 多组输入,内容,这里使用\n 读取最后多余的空格内容.
    {
        int i = 0;
        for (; i < sizeof(arrs) / sizeof(char); i++)
        {
            if (c == arrs[i])
            {
                printf("Vowel\n");
                break;   // 是元音跳出循环
            }

        }

        if (i == sizeof(arrs) / sizeof(char))  // 当i = 数组的大小长度则表示,没有找到,因为你存有的元音数组都遍历完了都没有找到,就是没有了
        {
            printf("Consonant\n");
        }

    }
}


// 方式四:
int main()
{

    char c = 0;
    char arr[] = "AEIOUaeiou";

    while (~scanf("%c\n", &c))
    {
        if (strchr(arr, c) > 0) // 判断字符在字符数组的所在下标位置注意.是没有0,起始下标是1 ,没有0
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }

    return 0;
}



/*
45道: BC47 判断是不是字母
描述
KiKi想判断输入的字符是不是字母，请帮他编程实现。
输入描述：
多组输入，每一行输入一个字符。
输出描述：
针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
示例1
输入：
A
6
输出：
A is an alphabet.
6 is not an alphabet.
*/

// 方式一:
int main()
{
    char c = 0;
    while ((scanf("%c", &c) != EOF))  // 多组输入
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) // 判断是不是字母
        {
            printf("%c is an alphabet.\n", c);
        }
        else
        {
            printf("%c is not an alphabet.\n", c);
        }

        getchar(); // 读取掉最后的空格内容,防止判断错误

    }
    return 0;
}


// 方式二：
int main()
{
    char c = 0;
    while (scanf("%c", &c) != EOF)
    {
        if (isalpha(c))  // 判断字符是不是字母,头文件#include<ctype.h>
        {
            printf("%c is an alphabet.\n", c);
        }
        else
        {
            printf("%c is not an alphabet.\n", c);
        }
        getchar(); // 读取多余的空格内容
    }
    return 0;
}



/*
46道: BC48 字母大小写转换
描述
KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
输入描述：
多组输入，每一行输入一个字母。
输出描述：
针对每组输入，输出单独占一行，输出字母的对应形式。
示例1
输入：
a
A
Z
输出：
A
a
z
*/

// 方式一:
int main()
{
    char c = 0;
    while ((scanf("%c", &c)) != EOF)
    {
        if (c >= 'A' && c <= 'Z') //判断字母大写,转为为小写+32
        {
            printf("%c\n", c + 32);
        }
        else   // 判断字母为小写,转为大写-32
        {
            printf("%c\n", c - 32);
        }

        getchar(); // 处理读取多余的空格内容,防止最后的判断错误
    }

    return 0;
}


// 方式二:
int main()
{
    char c = 0;
    while ((scanf("%c", &c)) != EOF)  // 多组数据的输入
    {
        if (islower(c)) // 判断字符是不是字母,是返回1true,不是0 false
        {
            printf("%c\n", toupper(c)); // toupper()将小写字母转换为大写字母,#include<ctype.h> 头文件的导入
        }
        else
        {
            printf("%c\n", tolower(c)); // tolower()将大写字母转换为小写字母
        }

        getchar(); // 读取掉多余的空格,防止判断错误
    }
    return 0;
}