#include <stdio.h>
int main(void)
{
    int n = 3;
    while (n)
    {
        printf("%d\n", n);
        n--;
    }
    n = -3;
    while (n)
    {
        printf("%d\n", n);
        n++;
    }

    return 0;
}