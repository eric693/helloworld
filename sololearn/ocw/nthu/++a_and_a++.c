#include <stdio.h>
int main(void)
{
    int x = 1, y = 1;
    int pre, post;
    pre = ++x * 2;  //先加一再乘二
    post = y++ * 2; //先乘二再加一
    printf("x    : %d\n", x);
    printf("pre  : %d\n", pre);
    printf("---------\n");
    printf("y    : %d\n", y);
    printf("post : %d\n", post);
    return 0;
}