#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define snr 10

int main()
{
    double a = 10, b = -snr / 10, c = 0.5;
    double d = pow(a, b);
    printf("%lf\n", d);
    double result = pow(d, c);
    printf("%lf\n", result);
}

/*
_input = _input + torch.randn_like(_input) * _std
print(_std)
print(_input)
return _input
                                                 */