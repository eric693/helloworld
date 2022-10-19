//指標運算來取出陣列的元素值
#include <stdio.h>
#define LEN 5

int main(void)
{
    int arr[LEN] = {10, 20, 30, 40, 50};
    int *p = arr;

    // 以指標方式存取
    for (int i = 0; i < LEN; i++)
    {
        printf("*(p + %d): %d\n", i, *(p + i));
    }
    putchar('\n');

    // 以指標方式存取資料
    for (int i = 0; i < LEN; i++)
    {
        printf("*(arr + %d): %d\n", i, *(arr + i));
    }

    return 0;
}