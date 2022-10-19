#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;
    printf("Please input a temperature in celsius:");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5) + 32;

    printf("Celsius:%.2f\tFahrenheit:%.2f\n", celsius, fahrenheit);
    return 0;
}