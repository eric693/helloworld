#include <stdio.h>
#include <string.h>

int main()
{
    struct array
    {
        char name[10];
        int age;
        float salary;
    } person;
    strcpy(person.name, "eric");
    person.age = 10;
    person.salary = 40000;

    return 0;
}