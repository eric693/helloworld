#include <stdio.h>

void dispbits(unsigned int val)
{
    int i;
    unsigned int mask = 1 << 31;
    for (i = 0; i < 32; i++)
    {
        if ((mask & val) != 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask = mask >> 1;
    }
    printf("\n");
}
int main()
{
    dispbits(6);
    dispbits(4);
    dispbits(6 | 4);
    dispbits(6 & 4);
    dispbits(6 ^ 4);
    return 0;
}