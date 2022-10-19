#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *ptd;
    int array_size, i;

    printf("how many doubles do you want? ");
    scanf("%d", &array_size);
    ptd = (double *)malloc(array_size * sizeof(double));
    if (ptd == NULL)
    {
        printf("memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < array_size; i++)
    {
        ptd[i] = (double)rand() / RAND_MAX;
    }
    for (i = 0; i < array_size; i++)
    {
        if (*(ptd + i) > 0.5)
        {
            printf("%d, %f\n", i, ptd[i]);
        }
        }
    free(ptd);
    return 0;
}