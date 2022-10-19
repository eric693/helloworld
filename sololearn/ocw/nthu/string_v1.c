#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int main(void)
{
    char strs[SIZE][4] = {
        "aab", "abc", "aaa", "abb", "acb",
        "aab", "abc", "aaa", "abb", "acb"};
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("%s\n", strs[i]);
    }
    printf("\n");
    qsort(strs, SIZE, 4 * sizeof(char), (int (*)(const void *, const void *))strcmp);
    for (i = 0; i < SIZE; i++)
    {
        printf("%s\n", strs[i]);
    }

    return 0;
}