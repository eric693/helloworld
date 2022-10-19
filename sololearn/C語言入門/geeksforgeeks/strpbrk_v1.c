// C code to demonstrate practical application
// of strpbrk
#include <stdio.h>
#include <string.h>

// Driver function
int main()
{
    // Initializing victory string
    char s1[] = "victory";

    // Declaring lottery strings
    char s2[] = "a23";
    char s3[] = "i22";
    char *r, *t;

    // Use of strpbrk()
    r = strpbrk(s1, s2);
    t = strpbrk(s1, s3);

    // Checks if player 1 has won lottery
    if (r != 0)
        printf("Congrats u have won");
    else
        printf("Better luck next time");

    // Checks if player 2 has won lottery
    if (t != 0)
        printf("\nCongrats u have won");
    else
        printf("Better luck next time");

    return (0);
}
