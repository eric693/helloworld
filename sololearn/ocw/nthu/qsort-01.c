#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, max;
    FILE *random;
    random = fopen("number.txt", "w");
    printf("how many number do you want?\n");
    scanf("%d", &max);
    for (int i = 0; i < max; i++)
    {
        fprintf(random, "%d\n", rand() % 1000000);
    }
    fclose(random);

    return 0;
}