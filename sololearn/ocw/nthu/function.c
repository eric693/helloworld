#include <stdio.h>
int add(int m, int n)
{
    int ans;
    ans = m + n;
    return ans;
}

int main()
{
    int a = 2;
    int b = 5;
    printf("ans : %d\n", add(a, b));
    return 0;
}