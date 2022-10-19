/*使用迴圈輸出 1 到 100 之間的奇數*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    // FOR loop 1
    for (i = 1; i <= 100; i++)
        if (i % 2 != 0)
            printf("%d, ", i);

    printf("\n\n");

    return 0;
}