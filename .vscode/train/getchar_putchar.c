//如果只想取得使用者輸入的字元，則可以使用 getchar，它直接取得使用者輸入的字元並傳回，如果只想輸出一個字元，則也可以直接使用 putchar
#include <stdio.h>

int main(void)
{
    char c;

    printf("請輸入一個字元：");
    c = getchar();

    putchar(c);
    putchar('\n');

    return 0;
}