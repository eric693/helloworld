#include <stdio.h>

int main(void)
{
    int a = 99;
    switch (a)
    {
    case 1:
        printf("a is 1\n");
        break;

    case 99:
        printf("a is 99\n");
        break;
    default:
        break;
    }
    return 0;
}