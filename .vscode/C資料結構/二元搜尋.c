#include <stdlib.h>
#include <stdio.h>

#define MAX 21
struct element /* 記錄結構宣告       */
{
    int key; /* 搜尋鍵值           */
};
typedef struct element record; /* 結構新型態         */
record data[MAX] = {           /* 結構陣列宣告       */
                    2, 5, 7, 9, 17, 21, 25,
                    33, 46, 89, 100, 121, 127, 139,
                    237, 279, 302, 356, 455, 467, 500};

/* ---------------------------------------- */
/*  二元搜尋                                */
/* ---------------------------------------- */
int binary_search(int key)
{
    int low;  /* 陣列開始變數       */
    int high; /* 陣列結束變數       */
    int mid;  /* 陣列中間變數       */

    low = 0;            /* 陣列開始           */
    high = MAX - 1;     /* 陣列結束           */
    while (low <= high) /* 二元搜尋主迴路     */
    {
        mid = (low + high) / 2;       /* 計算陣列中間值     */
        if (key < data[mid].key)      /* 比較小             */
            high = mid - 1;           /* 前一半             */
        else if (key > data[mid].key) /* 比較大         */
            low = mid + 1;            /* 後一半             */
        else
            return mid; /* 找到了             */
    }
    return -1; /* 沒有找到           */
}
/* ---------------------------------------- */
/*  主程式: 在一個已排序的陣列, 接著輸入    */
/*  值用二元搜尋來找值.                     */
/* ---------------------------------------- */
void main()
{
    int found; /* 是否找到變數       */
    int value; /* 搜尋值的內容       */

    while (1) /* 主迴路開始         */
    {
        printf("\n請輸入搜尋值(0-500) ==> ");
        scanf("%d", &value); /* 讀入搜尋值         */
        if (value != -1)
        {
            found = binary_search(value); /* 呼叫二元搜尋 */
            if (found != -1)
                printf("找到搜尋值:%d[%d]\n", value, found);
            else
                printf("沒有找到搜尋值:%d\n", value);
        }
        else
            exit(1); /* 結束程式           */
    }
}