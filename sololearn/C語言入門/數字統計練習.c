#include <stdio.h>

int main()
{
    int i, n, max, avg, sum;
    scanf("%d", &n);
    max = sum = n;
    for (i = 2; i <= 10; i++)
    {
        if (n > max)
        {
            max = n;
        }
        sum += n;
    }
    avg = sum / 10;

    printf("max: %d\n", max);
    printf("avg: %d\n", avg);
    return 0;
}