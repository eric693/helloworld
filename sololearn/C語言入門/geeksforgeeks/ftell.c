#include <stdio.h>
int main()
{
    FILE *fp = fopen("test.txt", "r");
    char string[20];
    fscanf(fp, "%s", string);

    printf("%ld", ftell(fp));
    return 0;
}