#include <stdio.h>

float sqr(float a)
{
    return a * a;
}

float div(float a, float b)
{
    return a / b;
}

int main(void)
{
    /*Ex 3-3: Define Function */
    /* call - BMI Calculator*/
    float height = 1.67;
    float weight = 50;
    float BMI;

    printf("BMI Calculator\n");
    float height2 = sqr(height);
    BMI = div(weight, height2);

    printf("%f\n", BMI);
    return 0;
}
