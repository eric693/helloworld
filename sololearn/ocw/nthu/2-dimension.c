#include <stdio.h>
int main()
{
    int a[10];
    int b[10][10];

    printf("size of 1d array : %lu bytes\n", sizeof(a[0]));
    printf("size of 2d array : %lu bytes\n", sizeof(b[0]));

    return 0;
}