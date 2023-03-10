#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define MAXSTACK 100 /* 最大堆疊容量     */

int stack[MAXSTACK]; /* 堆疊的陣列宣告   */
int top = -1;        /* 堆疊的頂端       */

/* ---------------------------------------- */
/*  堆疊資料的存入                          */
/* ---------------------------------------- */
int push(int value)
{
    if (top >= MAXSTACK) /* 是否超過容量     */
    {
        printf("堆疊內容全滿\n");
        return -1; /* 存入失敗         */
    }
    top++;              /* 堆疊指標加一     */
    stack[top] = value; /* 存入堆疊         */
}

/* ---------------------------------------- */
/*  堆疊資料的取出                          */
/* ---------------------------------------- */
int pop()
{
    int temp;

    if (top < 0) /* 是否堆疊是空     */
    {
        printf("堆疊內容是空的\n");
        return -1; /* 取出失敗         */
    }
    temp = stack[top]; /* 取出資料         */
    top--;             /* 堆疊指標減一     */
    return temp;       /* 堆疊取出         */
}

/* ---------------------------------------- */
/*  檢查堆疊是否是空的                      */
/* ---------------------------------------- */
int empty()
{
    if (top == -1) /* 是否是空         */
        return 1;  /* 空的             */
    else
        return 0; /* 不是空的         */
}

/* ---------------------------------------- */
/*  主程式: 運用empty()檢查牌是否發完.      */
/*     紅心: 陣列  0 - 12                   */
/*     方塊: 陣列 13 - 25                   */
/*     梅花: 陣列 26 - 38                   */
/*     黑桃: 陣列 39 - 51                   */
/* ---------------------------------------- */
int main()
{
    int card[52]; /* 樸克牌陣列       */
    int pos;      /* 牌代碼           */
    int i, temp;

    srand(time(&temp) % 60); /* 使用時間初始亂數 */
    for (i = 0; i < 52; i++)
        card[i] = 0; /* 清除樸克牌陣列   */
    i = 0;
    while (i != 5) /* 洗5張牌迴路      */
    {
        pos = rand() % 52;  /* 亂數取值 0-51    */
        if (card[pos] == 0) /* 是否是未洗牌     */
        {
            push(pos);     /* 存此張牌進堆疊   */
            card[pos] = 1; /* 設定此張牌洗過   */
            i++;           /* 下一張牌         */
        }
    }
    while (!empty()) /* 發完堆疊全部的牌 */
    {
        temp = pop(); /* 取出堆疊資料     */
        printf(" [%c%2d] ", temp / 13 + 3, temp % 13 + 1);
    }
    printf("\n"); /* 換行             */
}