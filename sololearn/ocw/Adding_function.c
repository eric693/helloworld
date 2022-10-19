/*設計一函數可以輸入兩個參數a與b，並回傳 a 加 b的結果*/
#include <stdio.h>
#include <stdlib.h>

float add(float a, float b)
{
    return a + b;
}

int main()
{
    float x = 3.4f, y = 3.6f;
    printf("%.2f+%.2f=%.2f\n", x, y, add(x, y));
    return 0;
}