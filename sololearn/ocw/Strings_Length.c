/*撰寫一可以算出字串長度的程式，請不要使用strlen()函數*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    const int SIZE = 100;
    char str[SIZE], cnt = 0;

    printf("Input a string:");

    // Get any string with space method 1
    // scanf("%[^\n]%*c", str);

    // Get any string with space method 2
    // gets(str);

    // Get any string with space method 3
    fgets(str, SIZE, stdin);

    while (str[cnt] != '\0' && ++cnt < SIZE)
        ;

    printf("Length:%d\n", cnt);

    return 0;
}