#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SPEED 0.082
int main()
{
    float minutes, distance;
    int size, letters;
    char name[10];
    printf("hi what's your name : ");
    scanf("%9s", name);
    printf("\n%s, how many minutes does it take to walk", name);
    printf("your dormitory to the Delta building ? ");
    scanf("%f", &minutes);
    size = sizeof(name);
    letters = strlen(name);

    distance = minutes * SPEED;
    printf("the distance from your dormitory to the Delta building\n");
    printf("is about %3f kilometers.\n\n", distance);

    printf("by the way,your fisrt name has %d letters\n", letters);
    printf("and we have %d bytes to store it in.\n", size);

    return 0;
}