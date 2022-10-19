/*使用指標的方式，將兩個數字相乘*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    int *pn1, *pn2, product;
    printf("enter num1:");
    scanf("%d", &n1);
    printf("enter num2:");
    scanf("%d", &n2);

    pn1 = &n1;
    pn2 = &n2;

    product = *pn1 * *pn2;
    printf("The product of %d and %d is %d\n", *pn1, *pn2, product);
    return 0;
}