/*設計可以交換兩個整數的函數。*/
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