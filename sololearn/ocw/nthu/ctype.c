#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char a[1000];
    scanf("%s", a);
    int i, up = 0, low = 0;
    for (i = 0; i < strlen(a); i++)
    {
        if (isupper(a[i]))
            up++;
        if (islower(a[i]))
            low++;
    }
    printf("%d %d %lu\n", up, low, (strlen(a) - up - low));
    return 0;
}