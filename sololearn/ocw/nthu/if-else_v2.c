#include <stdio.h>
int find(int n)
{
    if (n < 7)
        return 0; // return false
    if (n % 7 == 0)
        return n; // 只要回傳的值不是0 ，那就是 return true

    return 0; // return false
}
int main(void)
{

    int i;
    for (i = 0; i <= 100; i++)
    {
        if (find(i))
            printf("%d\n", i);
    }
    return 0;
}