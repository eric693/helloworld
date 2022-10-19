#include <stdio.h>

/* declaration */
int square(int num);

int main()
{
    int x, result;

    x = 5;
    result = square(x);
    printf("%d squared is %d\n", x, result);

    return 0;
}