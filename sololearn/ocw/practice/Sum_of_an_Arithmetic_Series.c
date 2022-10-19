/*設計一程式可算出底下等差數列的總和。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, i = 0;

    for (i = 0; i <= 100; i += 3)
        sum = sum + i;
    printf("sum is:%d\n", sum);

    return 0;
}