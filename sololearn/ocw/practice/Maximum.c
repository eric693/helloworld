#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter three integer:");
    scanf("%d%d%d", &a, &b, &c);

    printf("From %d, %d, %d, the maximum is ", a, b, c);
    if (a > b && a > c)
        printf("%d.\n", a);
    else if (b > c)
        printf("%d.\n", b);
    else
        printf("%d.\n", c);
    return 0;
}
