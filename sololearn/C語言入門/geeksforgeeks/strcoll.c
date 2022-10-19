// C program to illustrate strcoll()
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[13];
    char str2[13];
    int ret;

    strcpy(str1, "GEEKSFORGEEKS");
    strcpy(str2, "geeksforgeeks");

    ret = strcoll(str1, str2);

    if (ret > 0)
    {
        printf("str1 is greater than str2");
    }
    else if (ret < 0)
    {
        printf("str1 is lesser than str2");
    }
    else
    {
        printf("str1 is equal to str2");
    }

    return (0);
}
