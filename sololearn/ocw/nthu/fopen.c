
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int max = 0, min = 0;
    int number[100];

    FILE *random;

    random = fopen("number.txt", "r");

    while (fscanf(random, "%d", &number[total]) != EOF)
    {
        if (max < number[total])
            max = number[total];

        if (min > number[total])
            min = number[total];
        total++;
    }

    printf("The max is %7d\n", number[total - 1]);
    printf("The min is %7d\n", number[0]);

    return 0;
}