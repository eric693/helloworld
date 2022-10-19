#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int n;
    while ((c = getchar()) != EOF)
    {
        if (isspace(c))
            continue;
        if (isupper(c))
            printf("%c\n", tolower(c));
        if (islower(c))
            printf("%c\n", toupper(c));
        if (isdigit(c))
        {
            ungetc(c, stdin);
            scanf("%d", &n);
            printf("%d\n", n + 2);
        }
    }
    return 0;
}