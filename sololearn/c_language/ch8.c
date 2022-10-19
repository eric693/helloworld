#include <stdio.h>
#define STARS "*****************************"
int main(void)
{
    int hist[] = {3, 5, 2, 1, 8, 3, 1, 5, 4, 3};
    int index;
    for (index = 0; index < (sizeof hist) / (sizeof hist[0]); index++)
    {
        printf("[%d] %2d ", index, hist[index]);
        printf("%.*s\n", hist[index], STARS);
    }
    return 0;
}