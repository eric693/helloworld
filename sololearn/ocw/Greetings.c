/*設計一個可以輸入兩個參數 n 與 msg 的函數，此函數用來輸出 msg 訊息 n 次。*/
#include <stdio.h>
#include <stdlib.h>

void prtMsg(char *msg, int n)
{
    for (int i = 0; i < n; i++)
        printf("%s", msg);
}

int main()
{
    int n = 3;
    char *msg = "Hello, player!\n";
    prtMsg(msg, n);

    return 0;
}