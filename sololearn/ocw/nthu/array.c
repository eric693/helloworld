#include <stdio.h>
int a[3];
int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d : %d\n", i, a[i]);
    }
    return 0;
}