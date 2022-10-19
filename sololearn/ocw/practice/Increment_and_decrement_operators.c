#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0;
    j = i++ + ++i;
    printf("%d %d\n", i, j);

    j = i-- + --i;
    printf("%d %d\n", i, j);
    return 0;
}