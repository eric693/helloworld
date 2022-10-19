/*＆a ： 取地址 ＊ptr： 取值*/
#include <stdio.h>
int main()
{

    int a = 7;
    int *ptr;
    ptr = &a;
    printf("%d", *ptr);

    return 0;
}