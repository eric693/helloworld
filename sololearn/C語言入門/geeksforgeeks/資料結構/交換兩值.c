#include <stdio.h>
int swap1(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

/* ---------------------------------------- */
/*  交換兩值(傳址副程序)                    */
/* ---------------------------------------- */
void swap2(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

/* ---------------------------------------- */
/*  主程式                                  */
/* ---------------------------------------- */
void main()
{
    int x = 10; /* 局部變數宣告 */
    int y = 0;  /* 局部變數宣告 */

    printf("               X    Y   \n");
    printf("  初值         %d   %d   \n", x, y);

    /* 傳值副程序呼叫(交換XY) */
    swap1(x, y);
    printf("  傳值         %d   %d   \n", x, y);

    /* 傳址副程序呼叫(交換XY) */
    swap2(&x, &y);
    printf("  傳址         %d   %d   \n", x, y);
}