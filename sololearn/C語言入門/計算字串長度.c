#include <stdio.h>
int str_len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[15] = {
        'h', 'e', 'l', 'l', 'o'};
    printf("length: %zu\n", sizeof(str));
    printf("length: %d\n", str_len(str));
    return 0;
}