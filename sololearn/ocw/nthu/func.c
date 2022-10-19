#include <stdio.h>
int func1();
int func2();
int main()
{
    func1();

    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d\n", x + y);
    return 0;
}

int func1()
{
    func2();
    return 0;
}
int func2()
{
    printf("hello world\n");
    return 0;
}
