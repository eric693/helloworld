#include <stdio.h>
#include <string.h>
int main()
{
    char src[50], dest[50];

    strcpy(src, "this is source");
    strcpy(dest, "this is destination");

    strncat(dest, src, 15);
    printf("final destination string:: |%s|", dest);
    return 0;
}