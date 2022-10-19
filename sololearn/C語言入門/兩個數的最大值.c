#include <stdio.h>
int max2(int *, int *);
int main()
{
    int a = 3, b = 5;
    printf("max: %d\n", max2(&a, &b));

    return 0;
}

int max2(int *a, int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}