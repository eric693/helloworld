#include <stdio.h>
int main(void)
{
    int num, p;
    scanf("%d", &num);
    printf("The number %d can be written as\n", num);
    p = 1;

    while (num >= 10)
    {
        printf("%d*%d + ", num % 10, p);
        num = num / 10;
        p = p * 10;
    }
    printf("%d*%d", num % 10, p);
    return 0;
}