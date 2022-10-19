#include <stdio.h>
void str_print(char str[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main()
{
    char str[] = {
        'h', 'e', 'l', 'l', 'o'};
    str_print(str);
    return 0;
}