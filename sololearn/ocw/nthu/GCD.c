/*GCD 最大公因數 (Greatest Common Divisor)*/
#include <stdio.h> // GCD 遞迴版

int main(void)
{
    int a, b; // a,b > 0
    scanf("%d%d", &a, &b);
    while (a != 0 && b != 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a != 0)
        printf("%d\n", a);
    else
        printf("%d\n", b);
    return 0;
}
