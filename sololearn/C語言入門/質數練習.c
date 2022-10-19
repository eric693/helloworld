#include <stdio.h>

int main()
{
    int n;
    printf("n=");
    scanf("%d", &n);

    int isprime = 1;
    int number;
    for (int number = 2; number < n && isprime; number++)
    {
        if (n % number == 0)
        {
            isprime = 0;
        }
    }
    if (isprime == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}