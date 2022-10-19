#include <stdio.h>
int k = 0;
int count(void)
{

    k++;
    return k;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", count());
    }
    return 0;
}