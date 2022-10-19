/*
    file name: factorUsingRecursive.c
    Description: 利用遞迴呼叫計算 N 階乘
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
    unsigned long n;

    printf("-----Factorial counting Using Recursive----");
    do
    {
        printf("\nEnter a number( 0<=n<=12 ) to count n!: ");
        scanf("%ld", &n);
        flushBuffer();

        /* n 的值在一般系統中超過 13 會產生 overflow 得到不正確的值 */
        if (n < 0 || n > 12)
            printf("超出範圍!\n");
        else
            printf("%ld! = %ld\n", n, Factorial(n));

        printf("Continue(y/n)? ");
        ch = toupper(getchar());
    } while (ch == 'Y');

    return 0;
}

/* 利用遞迴呼叫自己計算N 階乘*/
long Factorial(long n)
{
    if (n == 1 || n == 0)
        return (1);
    else
        return (n * Factorial(n - 1));
}

void flushBuffer()
{
    while (getchar() != '\n')
    {
        continue;
    }
}
