#include <stdio.h>
#include <string.h>

struct Flight
{
    char flightNo[10];
    char airline[30];
    char origin[4], destination[4];
    int frequency, sitCapacity;
    double duration;
};

int main()
{
    /*Ex 13-1: declare a struct in C */
    struct Flight EK367;
}
