#include <stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d", &n);
    int number;
    for (number = 1; number <= n; number++)
    {
        if (n % number == 0)
        {
            printf("%d", number);
        }
    }
    printf("\n");
    return 0;
}