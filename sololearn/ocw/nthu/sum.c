#include <stdio.h>

int main()
{
    int i, n, sum;
    int a[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("total = %d\n", sum);
    return 0;
}