#include <stdio.h>

int max2(int, int);
int main()
{
    int a, b;
    printf("please enter the first integer: ");
    scanf("%d", &a);
    printf("please enter the second integer: ");
    scanf("%d", &b);
    printf("the maximum is %d.\n", max2(a, b));

    return 0;
}

int max2(int a, int b)
{
    int max;
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}