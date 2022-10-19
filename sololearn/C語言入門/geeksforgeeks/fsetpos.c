#include <stdio.h>
int main()
{
    FILE *fp;
    fpos_t position;
    fp = fopen("myfile.txt", "w+");
    fgetpos(fp, &position);
    fputs("helloworld", fp);
    fsetpos(fp, &position);

    fputs("geekdsforgeeks", fp);
    fclose(fp);
    return 0;
}