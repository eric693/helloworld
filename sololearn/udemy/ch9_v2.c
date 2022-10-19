#include <stdio.h>
#include <stdlib.h>

#define filename "Test.txt"
/*
int main()
{
    FILE *fp = NULL; //宣告檔案指標fp
    char ch;
    int linesCount = 0;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("File does not exist\n");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) //檔案結束
    {
        if (ch == '\n')
            linesCount++;
    }

    fclose(fp);
    fp = NULL;

    printf("Total number of lines are: %d\n", ++linesCount);

    return 0;
}
*/
int main()
{
    FILE *fp = NULL;
    char ch;
    int linecount = 0;

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("file is not exist\n");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF)

    {
        if (ch == '\n')
            linecount++;
    }
    fclose(fp);
    fp = NULL;
    printf("Total number of lines are: %d\n", ++linecount);
    return 0;
}