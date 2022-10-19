/*使用亂數函數 rand()來建立兩個大小為 3 x 3 的二維陣列。並輸出此兩矩陣相加後的結果*/
#include <stdio.h>
#include <stdlib.h>

void prtMatrix(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d] = %2d, ", i, j, m[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = rand() % 100;
            b[i][j] = rand() % 100;
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("a:\n");
    prtMatrix(a);

    printf("\n");

    printf("b:\n");
    prtMatrix(b);

    printf("\n");

    printf("The addition of matrix a and matrix b:\n");
    prtMatrix(c);
    return 0;
}