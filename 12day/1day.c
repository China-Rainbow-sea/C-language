#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

/*
* int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld")
        printf("%d\n", a + b);
    }
    return 0;
}
*/
/* 题目1 BC1 实践出真知
* 描述
于老师经常告诉我们“学习编程最好的办法就是上机实践，因为你要对计算机下指令，想让计算机帮你干活，就得多和计算机‘交流’，实践才能出真知。”
输入描述：
本题没有输入
输出描述：
Practice makes perfect!
*/
int main1()
{
    printf("Practice makes perfect!");
    return 0;
}


/* 题目2：BC6 小飞机
* KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。
*/
int main2()
{
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");

    return 0;
}



/* 题目3: BC2 我是大V 
* 描述
每个人都想成为大V (VIP：Very Important Person)，
但要一点一点积累才行，先从小v做起。要求输出由小写字母v组成的大V。
*/
// 方式1
int main3()
{
    printf("v   v\n");
    printf(" v v\n");
    printf("  v\n");

    return 0;
}
// 方式2：
int main31()
{
    printf("v   v\n v v\n  v\n");
    return 0;
}




/* 题目4:BC3 有容乃大
* 描述
确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大（字节）。
*/
int main4()
{
    printf("The size of short is %d bytes.\n", sizeof(short));
    printf("The size of int is %d bytes.\n", sizeof(int));
    printf("The size of long is %d bytes.\n", sizeof(long));
    printf("The size of long long is %d bytes.\n", sizeof(long long));

    return 0;
}



/* 题目五:BC7 缩短二进制
* 描述
我们处理的整数通常用十进制表示，在计算机内存中是以二进制补码形式存储，但通常二进制表示的整数比较长，
为了便于在程序设计过程中理解和处理数据，通常采用八进制和十六进制，缩短了二进制补码表示的整数
,但保持了二进制数的表达特点。请输出十进制整数1234对应的八进制和十六进制。
*/
// 知识扩展
/*
* `printf`可以使用使用格式控制串“`%o`”、“`%X`”分别输出八进制整数和十六进制整数，
并使用修饰符“#”控制前导显示,其中如果十六进制中的 `%X` 是大写的则表示显示十六进制时其中的字母是大写的`ABCEF` , 
如果十六进制中 `%x` 是小写的则表示显示十六进制时其中的字母是小写的 `abcef` 。
*/

int main()
{
    printf("%#x\n", 1234); /* 小写的0x*/
    printf("%#X\n", 1234);  /* 大写的0X*/
    return 0;
}

// 解题方式1:不使用 修饰符“#”控制可以控制前导显示，直接多个0显示
int main()
{
    printf("0%o 0X%X", 1234, 1234);
    return 0;
}
// 解题方式2： 使用 修饰符“#”控制可以控制前导显示
int main()
{
    printf("%#o %#X", 1234, 1234);
    return 0;
}




/* 题目六: BC19 反向输出一个四位数
* 描述
将一个四位数，反向输出。
输入描述：
一行，输入一个整数n（1000 <= n <= 9999）。
输出描述：
针对每组输入，反向输出对应四位数。
示例1
输入：1234
输出：4321
*/

// 解题一：
int main()
{
    int num = 0;
    scanf("%d", &num);
    while (num) // 当num == 0 是结束循环
    {
        printf("%d", num % 10); // %10 取出数值的最后一位数
        num = num / 10; // 数值后移动
    }
    return 0;
}

// 解题2
int main() {
    int num = 0;
    scanf("%d", &num);

    printf("%d", num % 10);
    printf("%d", num / 10 % 10);
    printf("%d", num / 100 % 10);
    printf("%d", num / 1000);
    return 0;
}




/* 题目七: BC28 大小写转换
* 输入描述：
多组输入，每一行输入大写字母。
输出描述：
针对每组输入输出对应的小写字母。
示例1
输入：
A
B
输出：
a
b
多组输入过程中要注意“回车”也是字母，所以要“吸收”(getchar())掉该字母。
*/

int main()
{
    int c = 0;
    while ((c = getchar()) != EOF)
    {
        printf("%c\n", c + 32); // 大写字母与小写字母相差 32
        getchar();  // 读取到遗留在输入缓存区的回车键字符
    }
    return 0;
}