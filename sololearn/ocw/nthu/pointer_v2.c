#include <stdio.h>
void function(int a)
{
    a = 99;
    printf("in function:\n");
    printf("addr = %p\n", &a);
    printf("a    = %d\n", a);
}

int main(void)
{
    int a = 10;

    function(a);
    printf("//---------------------//\n");
    printf("in main:\n");
    printf("addr = %p\n", &a);
    printf("a    = %d\n", a);

    return 0;
}