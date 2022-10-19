#include <stdio.h>

int main(void)
{
    int n = 10;
    int *p = &n;

    printf("n = %d\n", n);
    printf("*p = %d\n", *p);

    *p = 20;

    printf("n = %d\n", n);
    printf("*p = %d\n", *p);

    return 0;
}