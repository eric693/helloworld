#include <stdio.h>

int main()
{
    int i, n, b[10] = {0};
    for (i = 0; i <= 10; i++)
    {
        scanf("%d", &n);
        b[n]++;
    }
    int ans;
    for (n = 1; n < 10; n++)
    {
        if (b[n] >= b[ans])
        {
            ans = n;
        }
        }
    printf("ans: %d\n", ans);
    return 0;
}