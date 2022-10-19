#include <stdio.h>
#include <string.h>
int main()
{
    char mystring[] = "My name is Jason";
    char temp[50];

    strncpy(temp, mystring, sizeof(temp) - 1);
    printf("the string is: %s", temp);
    return 0;
}