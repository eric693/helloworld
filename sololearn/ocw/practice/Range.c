/*輸出 300 到 500 之間可以被 3 與 11 整除的整數。*/
#include <stdlib.h>
#include <stdio.h>
int main()
{

    int i;

    // FOR loop 1
    for (i = 300; i <= 500; i++)
        if (i % 3 == 0 && i % 11 == 0)
            printf("%d, ", i);

    printf("\n");

    return 0;
}