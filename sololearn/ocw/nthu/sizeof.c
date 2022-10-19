/*使用sizeof這個運算符號，可以查看某個類別或某個資料所占用的byte數，而sizeof所回傳的值(byte數)的型別為size_t*/
#include <stdio.h>
int main(void)
{
    char c = 'a';
    size_t char_size;

    char_size = sizeof(char);
    printf("This character '%c' has %u byte;\n", c, sizeof(c)); //%u代表顯示的格式是unsigned decimal integer。
    printf("Each 'char' takes up %u byte of space.\n", char_size);

    return 0;
}