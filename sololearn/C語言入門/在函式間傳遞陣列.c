#include <stdio.h>
int maxv(int[]);

int main()
{
    int a[3] = {3, 9, 7};
    printf("max: %d\n", maxv(&a[0]));
    return 0;
}
int maxv(int *v)
{
    int max = *(v + 0), i;
    for (i = 0; i < 3; i++)
    {
        if (*(v + 1) > max)
        {
            max = *(v + i);
        }
    }
    return max;
}