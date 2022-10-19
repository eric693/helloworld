#include <stdio.h>
int main(void)
{
    int feet;
    int inches;
    int centimeters;
    feet = 6;
    inches = 3;
    centimeters = (feet * 12 + inches) * 2.54;
    printf("%d feet %d inches = %d centimeters.\n", feet, inches, centimeters);
    return 0;
}