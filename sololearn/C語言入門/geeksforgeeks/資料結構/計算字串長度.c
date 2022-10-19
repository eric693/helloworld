#include <stdio.h>
int strlen(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

/* ---------------------------------------- */
/*  主程式: 讀入字串後, 印出字串長度        */
/* ---------------------------------------- */
int main()
{
    char string[100]; /* 字串陣列宣告   */
    int len;          /* 字串長度       */

    printf("請輸入字串 ==> ");
    gets(string);         /* 讀取字串       */
    len = strlen(string); /* 計算字串長度   */
    printf("輸入字串長度是 %d \n ", len);
}