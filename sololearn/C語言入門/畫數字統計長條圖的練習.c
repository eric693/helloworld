#include <stdio.h>
int main()
{
    int i, n, j, b[10] = {0};
    for (i = 0; i <= 10; i++)
    {
        scanf("%d", &n);
        b[(n - 1) / 10]++;
    }
    for (i = 0; i <= 10; i++)
    {
        printf("%d: ", i * 10);
        for (j = 0; j <= b[i - 1]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}