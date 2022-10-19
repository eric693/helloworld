#include <stdio.h>
int main()
{
    int n = 0;
    while (++n)
    {
        if (n == 3)
            continue;
        else if (n == 9)
            break;
        printf("%d\n", n);
    }

    return 0;
}