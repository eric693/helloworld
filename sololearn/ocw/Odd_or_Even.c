/*設計一函數可以輸入一個整數，函數回傳數值 1 表示是奇數，回傳數值 0 表示偶數*/
#include <stdio.h>
#include <stdlib.h>

int isOdd(int x)
{
    // We can use return x % 2;
    return x % 2;
    // if( x % 2 == 1 ) return 1;
    // if( x % 2 == 0 ) return 0;
}

int main()
{
    int x = 3;

    if (isOdd(x) == 1)
        printf("%d is odd.\n", x);
    else if (isOdd(x) == 0)
        printf("%d is even.\n", x);

    x = 4;
    if (isOdd(x) == 1)
        printf("%d is odd.\n", x);
    else if (isOdd(x) == 0)
        printf("%d is even.\n", x);

    return 0;
}