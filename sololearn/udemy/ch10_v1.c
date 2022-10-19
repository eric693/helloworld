#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d \n", stringLength("stringLength test"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("eric"));

    return 0;
}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}
