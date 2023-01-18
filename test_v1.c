#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define snr 10

int main()
{
        double a = 10, b = -snr / 10, c = 0.5;
        double d = pow(a, b);
        printf("%lf\n", d);
        double result = pow(d, c);
        printf("%lf\n", result);
        return 0;
}