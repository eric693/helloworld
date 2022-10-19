/*設計可以將字串的小寫字母轉換成大寫字母，大寫字母轉換成小寫字母*/
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
    {
        char c = str[a];
        if (c >= 'a' && c <= 'z')
            c = c - 32;
        else if (c >= 'A' && c <= 'Z')
            c = c + 32;

        printf("%c", c);
        a++;
    }

    return 0;
}