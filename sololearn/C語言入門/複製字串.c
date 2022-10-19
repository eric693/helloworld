#include <stdio.h>
#include <string.h>

int main()
{
    const char *source = "test";
    char destination[5];

    strcpy(destination, source);
    printf("%s\n", destination);
    return 0;
}