#include <stdio.h>

int main(void)
{
    int input = 0;
    int remain = 0;

    printf("輸入整數：");
    scanf("%d", &input);

    remain = input % 2;
    if (remain == 1)
    {
        printf("%d 為奇數\n", input);
    }
    else
    {
        printf("%d 為偶數\n", input);
    }

    return 0;
}