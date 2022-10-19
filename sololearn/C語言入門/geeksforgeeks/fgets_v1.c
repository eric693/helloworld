// C program to illustrate
// fgets()
#include <stdio.h>
#define MAX 15
int main()
{
    char buf[15];
    fgets(buf, MAX, stdin);
    printf("string is : %s\n", buf);
    return 0;
}
