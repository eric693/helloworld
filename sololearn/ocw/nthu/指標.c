#include <stdio.h>
int main()
{
    int *px;
    int x;
    double y = 2.5;
    double *py;
    px = &x;
    py = &y;

    printf("%p,%p\n", &x, &y); // 16進位格式
    printf("%u,%u\n", sizeof(px), sizeof(py));
    printf("%u,%u\n", sizeof(*px), sizeof(*py));
    printf("%d\n", *py);

    return 0;
}