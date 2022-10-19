#include <stdio.h>
#include <stdlib.h>
struct A
{
    char a;
    double b;
    int c;
    char d;
};

int main(void)
{
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(double) = %d\n\n", sizeof(double));

    printf("sizeof(struct A) = %d\n", sizeof(struct A));
    return 0;
}