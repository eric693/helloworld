// Program to check punctuation
#include <stdio.h>
#include <ctype.h>
int main()
{
    // The punctuations in str are '!' and ','
    char str[] = "welcome! to GeeksForGeeks, ";

    int i = 0, count = 0;
    while (str[i])
    {
        if (ispunct(str[i]))
            count++;
        i++;
    }
    printf("Sentence contains %d punctuation"
           " characters.\n",
           count);
    return 0;
}
