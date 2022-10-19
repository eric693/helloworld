/*使用亂數函數 rand() 產生 10 個整數，尋找特定的數值，並用 -1 來取代。*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numbers[10], target = -1;

    srand(time(0));

    printf("Enter an integer between [0 - 9]:");
    scanf("%d", &target);

    printf("The numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = rand() % 10;
        printf("%2d,", numbers[i]);

        // Find the target and replace it with -1
        if (numbers[i] == target)
            numbers[i] = -1;
    }

    printf("\nAfter replacing, the numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%2d,", numbers[i]);
    }

    printf("\n");
    return 0;
}