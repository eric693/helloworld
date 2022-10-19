#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("please enter the number:", a, b, c, d);
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("(a + b) * (c + d) = %d\n", (a + b) * (c + d));
    return 0;
}