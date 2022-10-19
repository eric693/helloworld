#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("enter the integer number[%d]:", i);
        scanf("%d", &number[i]);
        sum = sum + number[i];
    }
    printf("\ntotal:%d", sum);

    return 0;
}