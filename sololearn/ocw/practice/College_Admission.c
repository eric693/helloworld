#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gpa;
    printf("Please enter your GPA:");
    scanf("%f", &gpa);

    if (gpa > 4.0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
