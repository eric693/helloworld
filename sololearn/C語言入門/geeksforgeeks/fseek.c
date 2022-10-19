#include <stdio.h>

int main()
{
    FILE *fp = fopen("test.txt", "r");

    if (fseek(fp, 0L, SEEK_SET) != 0)
    {
        /* Handle open error */
    }

    /* Do some processing with file*/

    rewind(fp); /* no way to check if rewind is successful */

    /* Do some more precessing with file */

    return 0;
}
