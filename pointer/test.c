#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n = 10;
    int *ptr = &n;

    printf("n 的值：%d %d \n", n, *ptr);
    printf("n 的位址：%p\n", &n);

    return 0;
}