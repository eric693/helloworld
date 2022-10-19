#include <stdio.h>

int main()
{
    int a, b, min;
    printf("pleasr enter the integer :");
    scanf("%d%d", &a, &b);
    min = a;
    if (b < min)
    {
        min = b;
    }

    printf("%d", min);
    return 0;
}