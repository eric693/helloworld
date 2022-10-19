/*設計一函數可以輸入兩個參數a與b，並回傳 a 乘 b的結果*/
#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int x = 3, y = 4;
    printf("%3d * %3d = %3d\n", x, y, multiply(x, y));
    return 0;
}