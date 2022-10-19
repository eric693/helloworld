#include <stdio.h>
#include <stdlib.h>

int stringlength(const char string[]);
int main()
{
    const char word1[] = "eric";
    const char word2[] = "ok";
    const char word3[] = "whatever";

    printf("%d %d %d\n", stringlength(word1), stringlength(word2), stringlength(word3));
    return 0;
}
int stringlength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
        ++count;

    return count;
}