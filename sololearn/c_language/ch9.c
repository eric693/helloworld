#include <stdio.h>
#define WIDTH 40
void starbar(void); /* function prototype */
int main(void)
{
    starbar();
    printf("%s\n", "NTHU CS");
    printf("%s\n", "101, Sec. 2, Kuang Fu Rd.");
    printf("%s\n", "Hsinchu, 300 Taiwan");
    starbar();
    return 0;
}
void starbar(void)
{ /* function definition */
    int count;
    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}