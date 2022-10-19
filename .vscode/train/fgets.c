#include <stdio.h>

int main(void)
{
    char buf[20];

    puts("請輸入字串：");
    fgets(buf, sizeof(buf), stdin);

    puts("輸入的字串為：");
    puts(buf);

    return 0;
}