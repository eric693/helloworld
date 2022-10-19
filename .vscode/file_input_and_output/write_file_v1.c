#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    int ch;

    filePointer = fopen("file.txt", "w+");
    fputs("this is eric course.", filePointer);
    fputs("i am happy to be here", filePointer);

    fclose(filePointer);

    return 0;
}
