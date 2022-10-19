#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    printf("Input your name:");
    scanf("%s", name); // name is a string that don't need'&' operator

    printf("%s, nice to meet you.\n", name);
    return 0;
}