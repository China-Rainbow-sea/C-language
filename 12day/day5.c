#define  _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*
39��:BC41 ���������
����
��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
����������
�������룬ÿ���������һ��������ʾ�����̡�
���������
���ÿ�����룬�����Genius����
ʾ��1
���룺160
�����Genius
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
40��:OBC42 �����ɼ�
����
KiKi��֪�����Ŀ��Գɼ��Ƿ�������������жϡ��Ӽ�������һ��������ʾ�ĳɼ�������жϳɼ��Ƿ���90~100֮�䣬������������Perfect����

����������
�������룬ÿ���������һ��������ʾ�ĳɼ���90~100����
���������
���ÿ�����룬�����Perfect����
ʾ��1
���룺98
�����Perfect
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

41��: BC43 �������
����
KiKi��֪�����Ŀ��Է����Ƿ�ͨ����������жϡ��Ӽ�����������һ��������ʾ�ķ���������жϸ÷����Ƿ��ڼ���Χ�ڣ�������񣬼����������ڵ���60�֣��������Pass�������������Fail����
����������
�������룬ÿ���������һ��������ʾ�ķ�����0~100����
���������
���ÿ�����룬�����Pass����Fail����
ʾ��1
���룺94
�����Pass
ʾ��2
���룺44
�����Fail
*/

int main()
{
    int gender = 0;
    while (~scanf("%d", &gender)) // ���� scanf("%d",&gender) != EOF
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
42��: BC44 �ж�������ż��
����
KiKi��֪��һ����������ż�ԣ�������жϡ��Ӽ�����������һ����������Χ-231~231-1��������ж�������ż�ԡ�
����������
�������룬ÿ���������һ��������
���������
���ÿ�����룬���������������Odd������ż����Even����
ʾ��1
���룺
4
7
�����
Even
Odd
*/

int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF) // ����~scanf("%d",num)��EOF(-1)ȡ��,Ϊ 0 ��
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
43��: BC45 ��߷���
����
KiKi�μ������ġ���ѧ������Ŀ��ԣ�������ж������е���߷֡��Ӽ���������������������ʾ�ķ���������ж����е���߷֡�
���ݷ�Χ�� 0 \le n \le 100 \0��n��100
����������
����һ�а�������������ʾ�ķ�����0~100�����ÿո�ָ���
���������
���Ϊһ�У������������е���߷֡�
ʾ��1
���룺
94 98 99
�����99
ʾ��2
���룺100 88 60
�����100
*/

// ��ʽһ:
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


// ��ʽ��:
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
44��:BC46 �ж���Ԫ�����Ǹ���
����
KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
����������
�������룬ÿ������һ����ĸ��
���������
���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant����
ʾ��1
���룺
A
b
�����
Vowel
Consonant
*/


// ��ʽһ
int main()
{
    char c = 0;
    char arrs[] = "AEIOUaeiou";  // ��������洢Ԫ����Ϣ
    while (scanf("%c", &c) != EOF)  // �������� ������ ~scanf("%d",&c)
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

        getchar();  // ��ȡ���ո�,��������
    }

    return 0;
}



// ��ʽ��

int main()
{
    char c = 0;
    char arrs[] = "AEIOUaeiou";  // ��������洢Ԫ����Ϣ
    while ((c = getchar()) != EOF)  // �������� ������ ~scanf("%d",&c)
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

        getchar();  // ��ȡ���ո�,��������
    }

    return 0;
}



// ��ʽ��:
int main()
{
    char arrs[] = "AEIOUaeiou";
    char c = 0;
    while (~scanf("%c\n", &c))  // ��������,����,����ʹ��\n ��ȡ������Ŀո�����.
    {
        int i = 0;
        for (; i < sizeof(arrs) / sizeof(char); i++)
        {
            if (c == arrs[i])
            {
                printf("Vowel\n");
                break;   // ��Ԫ������ѭ��
            }

        }

        if (i == sizeof(arrs) / sizeof(char))  // ��i = ����Ĵ�С�������ʾ,û���ҵ�,��Ϊ����е�Ԫ�����鶼�������˶�û���ҵ�,����û����
        {
            printf("Consonant\n");
        }

    }
}


// ��ʽ��:
int main()
{

    char c = 0;
    char arr[] = "AEIOUaeiou";

    while (~scanf("%c\n", &c))
    {
        if (strchr(arr, c) > 0) // �ж��ַ����ַ�����������±�λ��ע��.��û��0,��ʼ�±���1 ,û��0
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
45��: BC47 �ж��ǲ�����ĸ
����
KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�
����������
�������룬ÿһ������һ���ַ���
���������
���ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������
ʾ��1
���룺
A
6
�����
A is an alphabet.
6 is not an alphabet.
*/

// ��ʽһ:
int main()
{
    char c = 0;
    while ((scanf("%c", &c) != EOF))  // ��������
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) // �ж��ǲ�����ĸ
        {
            printf("%c is an alphabet.\n", c);
        }
        else
        {
            printf("%c is not an alphabet.\n", c);
        }

        getchar(); // ��ȡ�����Ŀո�����,��ֹ�жϴ���

    }
    return 0;
}


// ��ʽ����
int main()
{
    char c = 0;
    while (scanf("%c", &c) != EOF)
    {
        if (isalpha(c))  // �ж��ַ��ǲ�����ĸ,ͷ�ļ�#include<ctype.h>
        {
            printf("%c is an alphabet.\n", c);
        }
        else
        {
            printf("%c is not an alphabet.\n", c);
        }
        getchar(); // ��ȡ����Ŀո�����
    }
    return 0;
}



/*
46��: BC48 ��ĸ��Сдת��
����
KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
����������
�������룬ÿһ������һ����ĸ��
���������
���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
ʾ��1
���룺
a
A
Z
�����
A
a
z
*/

// ��ʽһ:
int main()
{
    char c = 0;
    while ((scanf("%c", &c)) != EOF)
    {
        if (c >= 'A' && c <= 'Z') //�ж���ĸ��д,תΪΪСд+32
        {
            printf("%c\n", c + 32);
        }
        else   // �ж���ĸΪСд,תΪ��д-32
        {
            printf("%c\n", c - 32);
        }

        getchar(); // �����ȡ����Ŀո�����,��ֹ�����жϴ���
    }

    return 0;
}


// ��ʽ��:
int main()
{
    char c = 0;
    while ((scanf("%c", &c)) != EOF)  // �������ݵ�����
    {
        if (islower(c)) // �ж��ַ��ǲ�����ĸ,�Ƿ���1true,����0 false
        {
            printf("%c\n", toupper(c)); // toupper()��Сд��ĸת��Ϊ��д��ĸ,#include<ctype.h> ͷ�ļ��ĵ���
        }
        else
        {
            printf("%c\n", tolower(c)); // tolower()����д��ĸת��ΪСд��ĸ
        }

        getchar(); // ��ȡ������Ŀո�,��ֹ�жϴ���
    }
    return 0;
}