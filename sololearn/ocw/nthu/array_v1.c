#include <stdio.h>

int main()
{
    int a[5] = {4, 6};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d : %d\n", i, a[i]);
    }
    return 0;
}