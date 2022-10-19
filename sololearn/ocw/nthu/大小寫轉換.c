#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            putchar(ch - 'a' + 'A');
        }
        else
        {
            putchar(ch);
        }
    }
    return 0;
}