#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10], big = 0;
    printf("The numbers:");
    for (int i = 0; i < 10; i++)
    {

        numbers[i] = rand();
        printf("%d,", numbers[i]);
        if (big < numbers[i])
            big = numbers[i];
    }
    printf("\nThe biggest integer:%d.\n", big);
    return 0;
}