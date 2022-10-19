#include <stdio.h>
int main()
{
    int a[10] = {0};
    a[0] = 3;
    a[3] = 6;
    a[9] = 9;
    printf("%d\n", a[9]);
    return 0;
}