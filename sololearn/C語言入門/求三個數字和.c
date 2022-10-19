#include <stdio.h>
int main()
{
    int integer, sum;
    printf("please enter the firse number :");
    scanf("%d", &integer);
    sum = integer;
    printf("please enter the second number :");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("please enter the third number :");
    scanf("%d", &integer);
    sum = sum + integer;

    printf("%d\n", sum);

    return 0;
}
