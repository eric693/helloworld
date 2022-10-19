#include <stdio.h>
int main()
{
    int v[3] = {1, 2, 3};
    printf("%zu\n", sizeof(v));     // sizeof(int[3])
    printf("%zu\n", sizeof(v[0]));  // sizeof(int)
    printf("%zu\n", sizeof(&v[0])); // sizeof((int*))
    printf("%zu\n", sizeof(&v));    // sizeof(int(*)[3])
    return 0;
}