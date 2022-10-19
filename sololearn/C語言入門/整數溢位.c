#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int a = 1000;
    unsigned int b = a * a * a;
    unsigned int c = a * a * a * a;
    printf("%u\n", b);
    printf("%u\n", c); // 100000000000%UINT_MAX
    printf("%u\n", UINT_MAX);
    return 0;
}
