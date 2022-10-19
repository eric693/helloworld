// C,C++ program demonstrate functionality of strncat()
#include <stdio.h>
#include <string.h>

int main()
{

    // Take any two strings
    char src[50] = "efghijkl";
    char dest[50] = "abcd";

    // Appends 5 character from src to dest
    strncat(dest, src, 6);

    // Prints the string
    printf("Source string : %s\n", src);
    printf("Destination string : %s", dest);

    return 0;
}
