/*設計一個C語言程式來呈現指標的語法，例如宣告、取址、取值等*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 50;

    // declaration
    int *ip;

    // assignment
    ip = &n;

    printf("The value of &n:%X\n", &n);
    printf("The value of n:%i\n", n);

    printf("The value of &ip:%X\n", &ip);
    printf("The value of ip:%X\n", ip);
    printf("The value of *ip:%i\n", *ip);
    return 0;
}