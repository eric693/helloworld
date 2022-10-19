/*使用迴圈來輸出英文的大小寫字母*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    printf("Small letters: ");
    for (letter = 'a'; letter <= 'z'; letter++)
        printf("%c ", letter);

    printf("\n\n");
    printf("Large letters: ");
    for (letter = 'A'; letter <= 'Z'; letter++)
        printf("%c ", letter);

    return 0;
}
