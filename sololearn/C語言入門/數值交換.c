#include <stdio.h>
int main()
{
    int a, b;
    printf("please enter the first number : ");
    scanf("%d", &a);
    printf("please enter the second number : ");
    scanf("%d", &b);

    int temp = a;
    a = b;
    b = temp;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
