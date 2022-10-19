//對於unsigned int值，最大值由<limits.h>中定義的 UINT_MAX 宏指定，最小值為 0。根據 C 標準，
//符號運算永遠不會溢出，而是執行以無符號類型的最大值 + 1 為模，因此對於unsigned int
//，算術以 UINT_MAX + 1 為模執行，使得 UINT_MAX + 1 為 0，UINT_MAX + 2 為 1#include <limits.h>
#include <stdio.h>
#include <limits.h>
int main()
{
    printf("UINT_MAX + 1 = %u", UINT_MAX + 1);
}