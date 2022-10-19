#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL)
    {
        fputs("can not open file", fp);
        exit(0);
    }
    else
    {
        fputs("geeksforgeeks", fp);
        puts("done");
        fclose(fp);
    }
    return 0;
}
