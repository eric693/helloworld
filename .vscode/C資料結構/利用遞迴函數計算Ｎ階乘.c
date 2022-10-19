/*
    file name: factorUsingIterative.c
    Description: Factorial numbers count using iterative
    利用迴圈做N階乘的計算
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* 函數原型宣告 */
long Factorial(long);
void flushBuffer(void);

int main()
{
    char ch;
    long n;

    printf("-----Factorial counting using Iterative-----");
    do
    {
        printf("\nEnter a number(0 <= n <= 12) to count n!: ");
        scanf("%ld", &n);
        flushBuffer();
        if (n < 0 || n > 12)
            printf("Input out of range!\n");
        else
            printf("%ld! = %ld\n", n, Factorial(n));

        printf("Continue(y/n)? ");
        ch = toupper(getchar());
    } while (ch == 'Y');

    return 0;
}

long Factorial(long n)
{
    long sum = 1;
    int i;

    if (n == 0 || n == 1) /* 當 n=0 或 n=1 時, 0!=1, 1!=1 */
        return (1);       /* 故直接傳回1 */
    else
    {
        for (i = 2; i <= n; i++) /* sum 記錄目前階乘之和 */
            sum *= i;            /* sum 與 i 相乘之和放回 sum 中 */
    }
    return (sum);
}

void flushBuffer()
{
    while (getchar() != '\n')
    {
        continue;
    }
}
