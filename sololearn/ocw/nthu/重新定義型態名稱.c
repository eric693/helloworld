#include <stdio.h>
#include <stdlib.h>
typedef struct a
{
    char name[16];
    int age;
    struct a *ptr;
} PERSON;

int main()
{
    PERSON person = {"Amy", 20};
    person.age = 21;
}