#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10], evenSum = 0, oddSum = 0;

    printf("The numbers:");
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = rand() % 10;
        printf("%d,", numbers[i]);

        if (numbers[i] % 2)
        {
            oddSum += numbers[i];
        }
        else
        {
            evenSum += numbers[i];
        }
    }

    printf("\nThe sum of even numbers:%d\n", evenSum);
    printf("The sum of odd numbers:%d\n", oddSum);
    return 0;
}