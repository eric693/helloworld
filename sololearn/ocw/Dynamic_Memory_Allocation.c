#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *pI;

    printf("How many integers? ");
    scanf("%d", &n);

    // using malloc to allocate memory
    pI = (int *)malloc(n * sizeof(int));

    if (pI == NULL) // if fail to allocate
    {
        printf("Couldn't allocate memory\n");
        return 0; // exit
    }

    // Releasing the memory allocated by malloc
    free(pI);

    return 0;
}