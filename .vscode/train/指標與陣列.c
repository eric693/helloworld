//在宣告陣列之後，使用到陣列變數時，會取得首元素的位址，例如在下面的程式中將指出，陣列 arr 與 &arr[0] 的值是相同的
#include <stdio.h>

int main(void)
{
    int arr[10] = {0};

    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n", &arr[0]);

    return 0;
}