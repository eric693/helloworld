#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age >= 18)
        printf("Congratulation!\n");
    else
        printf("There are %d years left to be an adult.\n", 18 - age);
    return 0;
}