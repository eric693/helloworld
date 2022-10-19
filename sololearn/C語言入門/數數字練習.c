#include <stdio.h>

void counto3(int);

int main()
{
    counto3(1);
    return 0;
}

void counto3(int i)
{
    if (i <= 3)
    {
        printf("%d\n", i);
        counto3(i + 1);
    }
}