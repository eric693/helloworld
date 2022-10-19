/*指標 與 二維陣列*/
#include <stdio.h>
int main(void)
{
    int a[3][3];
    int i, j;
    int *ptr = a;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = i * 3 + j;
        }
    }

    for (; *ptr < 9; ptr++)
    {
        printf("%d : %p\n", *ptr, ptr);
    }
}