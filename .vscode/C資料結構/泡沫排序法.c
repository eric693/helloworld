#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX 20 /* 最大字串長度           */

/* ---------------------------------------- */
/*  泡沫排序法                              */
/* ---------------------------------------- */
void bubble(char *string, int count)
{
    int i, done;
    char temp;

    done = 0; /* 建立變數               */
    while (!done)
    {
        done = 1;
        for (i = 0; i < count - 1; i++)    /* 第二層迴路       */
            if (string[i + 1] < string[i]) /*比較相鄰的陣列元素*/
            {
                temp = string[i + 1]; /* 交換兩字元             */
                string[i + 1] = string[i];
                string[i] = temp;
                done = 0; /* 有交換                 */
            }
        if (!done)
            /* 列印交換後字串 */
            printf("輸出結果: [%s]\n", string);
    }
}

/* ---------------------------------------- */
/*  主程式: 輸入字串後將字串排序.           */
/* ---------------------------------------- */
int main()
{
    char string[MAX]; /* 字串陣列               */
    int count;        /* 字串長度               */

    printf("輸入欲排序的字串 ==> ");
    gets(string);           /* 讀取字串               */
    count = strlen(string); /* 計算字串長度           */
    bubble(string, count);  /* 泡沫排序法             */
    /* 列印排序後字串 */
    printf("\n輸出排序結果: [%s]\n", string);
}