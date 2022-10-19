#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("請輸入兩個數字，中間使用空白區隔）：");
    scanf("%d %d", &number1, &number2);
    printf("你輸入的數字：%d %d\n", number1, number2);

    printf("請再輸入兩個數字，中間使用-號區隔）：");
    scanf("%d-%d", &number1, &number2);
    printf("你輸入的數字：%d-%d\n", number1, number2);

    return 0;
}