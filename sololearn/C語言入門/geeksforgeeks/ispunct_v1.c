// C program to print all Punctuations
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    printf("All punctuation characters in C"
           " programming are: \n");
    for (i = 0; i <= 255; ++i)
        if (ispunct(i) != 0)
            printf("%c ", i);
    return 0;
}
