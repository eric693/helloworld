#include <stdio.h>
int main()
{
    int grade;
    printf("enter the integer :");
    scanf("%d", &grade);
    if (grade > 60)
    {
        printf("pass");
    }
    else if (grade < 60)
    {
        printf("fail");
    }

    return 0;
}