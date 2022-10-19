#include <stdio.h>

int main(void)
{
    int number[5] = {0, 1, 2, 3, 4};
    int length = sizeof(number) / sizeof(number[0]);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}