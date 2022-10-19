/*找出全班最高分的分數
算一下有多少人及格
全班平均
標準差
樹狀圖
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define students 10
int a[100];
void input();
int first();
int save(int);
double average();
long double standard_deviation(double);
void graph();
int main(void)
{
    double ave;
    input();
    printf("highest : %d\n", first());
    printf("save : %d\n", save(60));
    ave = average();
    printf("average : %lf\n", ave);
    printf("sd : %Lf\n", standard_deviation(ave));
    graph();

    return 0;
}

void input()
{
    int i;
    for (i = 0; i < students; i++)
    {
        scanf("%d", &a[i]);
    }
}

int first()
{
    int i = 0;
    int highest = a[0];
    for (i = 1; i < students; i++)
    {
        if (highest < a[i])
            highest = a[i];
    }
    return highest;
}

int save(int grade)
{
    int i = 0, n = 0;
    for (i = 0; i < students; i++)
    {
        if (a[i] >= grade)
            n++;
    }
    return n;
}

double average()
{
    int sum = 0, i = 0;
    double ave = 0;
    for (i = 0; i < students; i++)
    {
        sum += a[i];
    }

    ave = sum / students;
    return ave;
}

long double standard_deviation(double ave)
{
    long double sd = 0;
    int i = 0;
    for (i = 0; i < students; i++)
    {
        sd += pow(a[i] - ave, 2);
    }
    sd /= students;
    sd = sqrt(sd);

    return sd;
}

void graph()
{
    int i, j;
    int tree[101] = {0};
    for (i = 0; i < students; i++)
    {
        tree[a[i]]++;
    }

    for (i = 0; i <= 100; i++)
    {
        printf("%d : ", i);
        for (j = 0; j < tree[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
