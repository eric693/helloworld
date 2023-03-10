#include <assert.h>

int main(void)
{
    int a = 3; /* 0000 0011 */
    int b = 5; /* 0000 0101 */

    /*     0000 0011
        &) 0000 0101
        -------------
           0000 0001  */
    assert((a & b) == 1);

    assert((a | b) == 7);

    /*     0000 0011
        ^) 0000 0101
        -------------
           0000 0110  */
    assert((a ^ b) == 6);

    /* <<) 0000 0101
       --------------
           0000 1010  */
    assert((b << 1) == 10);
    /* >>) 0000 0101
       --------------
           0000 0010  */
    assert((b >> 1) == 2);

    return 0;
}