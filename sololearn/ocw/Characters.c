/*設計可以將一字串的每個字元以空白區隔做輸出*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    const int SIZE = 100;
    char str[SIZE], a = 0;

    printf("Input a string:");

    // Get any string with space method 1
    // scanf("%[^\n]%*c", str);

    // Get any string with space method 2
    gets(str);

    // Get any string with space method 3
    // fgets(str, SIZE, stdin);

    while (str[a] != '\0')

        printf("%c ", str[a++]);

    return 0;
}