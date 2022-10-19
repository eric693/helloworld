#include <stdio.h>
int x = 20; // global variable
void function1()
{
    printf("%d\n", x);
}
void function2()
{
    printf("%d\n", x);
}
int main()
{

    function1();
    function2();
    return 0;
}