/* Another scanset example with ^ */
#include <stdio.h>

int main(void)
{
    char str[128];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("You entered: %s\n", str);

    return 0;
}
