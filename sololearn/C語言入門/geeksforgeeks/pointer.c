/* Example */

#include <stdio.h>
int (*fp)();
int func(void) { printf("hello\n"); }

int main()
{
    fp = func;
    (*fp)();
    // fp(); // This will also call func
    return 0;
}
