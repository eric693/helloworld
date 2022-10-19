#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a = 0; // global 初始化區
char *p1;  // global 未初始化區
int main()
{
    int b;               // stack
    char s[] = "abc";    // stack
    char *p2;            // stack
    char *p3 = "123456"; // 123456\0 在常量區，p3在stack。
    static int c = 0;    // global (static) 初始化區
    p1 = (char *)malloc(10);
    p2 = (char *)malloc(20); //分配得來得10和20位元組的區域在heap
    strcpy(p1, "123456");
    // 123456\0 在常量區，編譯器可能會將它與 p3 中的 123456\0 優化成一個地方。
}