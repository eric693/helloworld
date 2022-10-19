#include <stdio.h>
int main()
{
    int n1 = 10, n2 = 11;

    // n1 > n2 (10 > 11) is false so using
    // logical operator '>', n1 > n2 produces 0
    // (0 means false, 1 means true) So, case 0
    // is executed as 10 > 11 is false. Here we
    // have used type cast to convert boolean to int,
    // to avoid warning.

    switch ((int)(n1 > n2))
    {
    case 0:
        printf("%d is the largest\n", n2);
        break;
    default:
        printf("%d is the largest\n", n1);
    }

    // n1 < n2 (10 < 11) is true so using logical
    // operator '<', n1 < n2 produces 1 (1 means true,
    // 0 means false) So, default is executed as we
    // don't have case 1 to be executed.

    switch ((int)(n1 < n2))
    {
    case 0:
        printf("%d is the largest\n", n1);
        break;
    default:
        printf("%d is the largest\n", n2);
    }

    return 0;
}
// This code is contributed by Santanu
