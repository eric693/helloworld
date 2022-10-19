#include <stdio.h>

typedef int row_vector[5];
int main()
{
    int a[10];
    int *pa;
    row_vector M[4];
    row_vector *pm;

    pa = a;
    pm = M;

    printf("%p %p\n", pa, pa + 1);
    printf("%p %p\n", pm, pm + 1);
}