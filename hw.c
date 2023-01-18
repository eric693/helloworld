#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gpa;
    printf("Enter an integer: ");
    scanf("%d", &gpa);
    if (gpa == 3)
    {
        printf("excellent student");
    }
    else if (gpa == 2)
    {
        printf("good student");
    }
    else if (gpa == 1)
    {
        printf("satisfactory");
    }
    else if (gpa == 0)
    {
        printf("score=100");
    }
    else
    {
        printf("are you a fool or a genius");
    }
    return 0;
}