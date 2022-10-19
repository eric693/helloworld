/*請設計一程式來練習 function pointer，例如兩數字的加、減、乘、除等運算*/
#include <stdio.h>
#include <stdlib.h>
double add(double n1, double n2);
double sub(double n1, double n2);
double mul(double n1, double n2);
double divi(double n1, double n2);

int main()
{
    double a = 3.44, b = 9.999;

    double (*op)(double, double) = add;

    printf("The addition of %f and %f is %f\n", a, b, op(a, b));

    op = sub;
    printf("The subtraction of %f and %f is %f\n", a, b, op(a, b));

    op = mul;
    printf("The multiplication of %f and %f is %f\n", a, b, op(a, b));

    op = divi;
    printf("The division of %f and %f is %f\n", a, b, op(a, b));

    return 0;
}

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divi(double a, double b) { return a / b; }
