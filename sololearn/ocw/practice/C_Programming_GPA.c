#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apcsScore;
    printf("Enter your C programming score:");
    scanf("%d", &apcsScore);

    printf("Grade:");
    if (apcsScore >= 90)
        printf("A");
    else if (apcsScore >= 70)
        printf("B");
    else if (apcsScore >= 50)
        printf("C");
    else if (apcsScore >= 30)
        printf("D");
    else if (apcsScore >= 0)
        printf("F");
    printf(".\n");

    return 0;
}