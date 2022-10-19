/*使用指標的語法來取得整數陣列的元素*/
#include <stdio.h>
#include <stdlib.h>
#define n 5
int main()
{
    int a[n] = {2, 3, 5, 7, 11};
    int *pi = a;

    for (int i = 0; i < n; i++)
        printf("a[%d] = %d\t", i, *(pi + i));

    return 0;
}