#include <stdio.h>

int main()
{
    /*Ex 10-3: Char Comparison */
    printf("Ex 10-3: Char Comparison\n");

    char c1 = 'a', c2 = 'a', c3 = 'A', c4 = '9';

    if (c1 == c2)
    {
        printf("c1 (%c) and c2 (%c) are equal!\n", c1, c2);
    }
    else
    {
        printf("c1 (%c) and c2 (%c) are different!\n", c1, c2);
    }

    if (c1 > c3)
    {
        printf("c1 (%c) is larger than c3 (%c)!\n", c1, c3);
    }
    else if (c1 == c3)
    {
        printf("c1 (%c) and c3 (%c) are equal!\n", c1, c3);
    }
    else
    {
        printf("c1 (%c) is smaller than c3 (%c)!\n", c1, c3);
    }

    if (c1 > c4)
    {
        printf("c1 (%c) is larger than c4 (%c)!\n", c1, c4);
    }
    else if (c1 == c4)
    {
        printf("c1 (%c) and c4 (%c) are equal!\n", c1, c4);
    }
    else
    {
        printf("c1 (%c) is smaller than c4 (%c)!\n", c1, c4);
    }
}
