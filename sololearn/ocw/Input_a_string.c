/*撰寫一可以輸入字串並輸出所輸入字串的程式*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    const int size = 100;
    char str[size];
    printf("Input a string:");
    // Get any string with space method 1
    scanf("%[^\n]%*c", str); /*gets(str)*/
    printf("Your string: %s\n", str);
    return 0;
}
