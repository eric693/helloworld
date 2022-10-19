#include <stdio.h>

int main()
{
    int i, j;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*", i);
        }
        printf("\n");
    }

    return 0;
}