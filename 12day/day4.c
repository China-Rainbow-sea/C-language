#define  _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
/*
* 
29��: BC23 ʱ��ת��
����
�������� seconds ������ת����Сʱ�����Ӻ��롣
���ݷ�Χ�� 0 < seconds < 100000000\0<seconds<100000000
����������һ�У�����һ����������������������
���������
һ�У�������������������Ϊ����������Ӧ��Сʱ����������������������Ϊ�㣩���м���һ���ո������
ʾ��1
���룺3661
�����1 1 1
*/


int main()
{
    int seconds = 0;
    scanf("%d", &seconds);

    int h = seconds / 60 / 60;  // Сʱ
    int m = seconds / 60 % 60;  // ����
    int s = seconds % 60;     // ��

    printf("%d %d %d", h, m, s);
    return 0;
}

// ��ʽ��:
#include <stdio.h>

int main()
{
    int seconds = 0;
    scanf("%d", &seconds);

    int h = seconds / 3600;  // Сʱ
    int m = (seconds - h * 3600) / 60;  // ����
    int s = seconds - h * 3600 - m * 60;     // ��

    printf("%d %d %d", h, m, s);
    return 0;
}


/*
30��: BC24 �ܳɼ���ƽ���ּ���
����
��������һ��ѧ����3�Ƴɼ�������Ļ�������ѧ�����ܳɼ��Լ�ƽ���ɼ���
����������
һ�У�3�Ƴɼ����ɼ�֮����һ���ո������
���������
һ�У��ܳɼ���ƽ���ɼ���С���������λ������һ���ո������
ʾ��1
���룺79.5 80.0 98.0
�����257.50 85.83
*/
// ��ʽһ��
int main()
{
    double gender1 = 0.0;
    double gender2 = 0.0;
    double gender3 = 0.0;

    scanf("%lf %lf %lf", &gender1, &gender2, &gender3); // doubel�ĸ�ʽ���������� %lf
    double sum = gender1 + gender2 + gender3;
    printf("%.2lf %.2lf", sum, sum / 3);

    return 0;
}

// ��ʽ��: 
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
31��: BC30 KiKi������
����
BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣���һʱ�䷢�������̡�
KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
����������
�������룬ÿ�������һ�У�����n��h��m����Ϊ���������������ݱ�֤m <= n * h��
���������
���ÿ�����룬���Ҳ��һ�У�ʣ�µ�δ�򿪵����̺�����
ʾ��1
���룺8 5 16
�����4 
*/

// ��ʽһ:
int main()
{
    int n = 0;
    int h = 0;
    int m = 0;


    while (scanf("%d %d %d", &n, &h, &m) != EOF)
    {
        int sum = 0;
        if (m % h > 0)  // ��ʾkiki���ں�����,
        {
            sum = m / h + 1; // ����kiki���ںȵ���ƿ����
        }
        else            // ��ʾkiki���ں�����
        {
            sum = m / h;
        }

        printf("%d\n", n - sum);
    }
    return 0;
}

// ��ʽ��:
int main()
{
    int n = 0;
    int h = 0;
    int m = 0;


    while (~scanf("%d %d %d", &n, &h, &m))
    {
        int sum = 0;
        if (m % h > 0)  // ��ʾkiki���ں�����,
        {
            sum = m / h + 1; // ����kiki���ںȵ���ƿ����
        }
        else            // ��ʾkiki���ں�����
        {
            sum = m / h;
        }

        printf("%d\n", n - sum);
    }
    return 0;
}
