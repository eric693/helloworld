/*使用指標語法來求出所輸入字串的長度*/
#include <stdio.h>
#include <stdlib.h>
#define n 5
int main()
{
    char str[100];
    int len = 0;

    printf("enter the string:");
    gets(str);

    char *pc = str;
    while (*pc != '\0')
    {
        len++;
        pc++;
    }

    printf("The length of the given string[%s] is:%d", str, len);

    return 0;
}