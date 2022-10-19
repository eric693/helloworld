#include <stdio.h>
#include <stdlib.h>
struct a
{
    char name[16];
    int age;
    struct a *ptr;
    // 不能含有自己，但可以有自己型別的指標。
};

int main()
{
    struct a person = {"Amy", 20}; // 初始化
    person.age = 21;               // 操作
}