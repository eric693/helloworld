/* Using non-const in case label */
#include <stdio.h>
int main()
{
    const int i = 10;
    int c = 10;
    switch (c)
    {
    case i: // not a "const int" expression
        printf("Value of c = %d", c);
        break;
        /*Some more cases */
    }
    return 0;
}
