#include <stdio.h>

int main(void)
{
    int score = 0;
    int level = 0;

    printf("輸入分數：");
    scanf("%d", &score);
    level = score / 10;

    switch (level)
    {
    case 10:
    case 9:
        puts("得 A");
        break;
    case 8:
        puts("得 B");
        break;
    case 7:
        puts("得 C");
        break;
    case 6:
        puts("得 D");
        break;
    default:
        puts("得 E（不及格）");
    }

    return 0;
}