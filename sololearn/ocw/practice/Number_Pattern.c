/*設計一程式輸出下圖上的數字圖案*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 9;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", i * j);
        printf("\n");
    }
    return 0;
}