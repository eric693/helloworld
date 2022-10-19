#include <stdio.h>
int main(void)
{
    int a = 10;

    if (a > 5)
    {
        printf("a > 5\n");
    }
    else if (a > 7)
    {
        printf("a > 7\n");
    }
    else
    {
        printf("a < 5\n");
    }
    return 0;
}