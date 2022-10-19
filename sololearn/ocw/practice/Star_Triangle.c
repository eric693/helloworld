/*設計一程式，輸出底下的星星三角形*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
