/*輸入一個整數，程式輸出此整數從 1 乘到 10 的結果*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Enter an integer:");
    scanf("%d", &num);
    for (i = 0; i <= 9; i++)
    {
        printf("%d*%d=%d\n", num, i, (num * i));
    }

    return 0;
}