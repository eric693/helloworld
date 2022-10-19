//使用 & 運算子取出變數的位址值並指定給指標
#include <stdio.h>
int main()
{
    int n = 10;
    int *p = &n;

    printf("n 的位址：%p\n", &n);
    printf("p 儲存的位址：%p\n", p);

    return 0;
}
