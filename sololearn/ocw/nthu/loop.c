#include <stdio.h>
#define BASE 1.6
int main(void)
{
    double kms;
    int status;

    printf("This is a km to mile converter.\n");
    printf("Please enter a number (q to quit): ");
    status = scanf("%lf", &kms);
    while (status == 1)
    {
        printf("%.2f kms equals to %.2f miles.\n", kms, kms / BASE);
        printf("Please enter another number (q to quit): ");
        status = scanf("%lf", &kms);
    }
    printf("This program is ended.\n");
    return 0;
}