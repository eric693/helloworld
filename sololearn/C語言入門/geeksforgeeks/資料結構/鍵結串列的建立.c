#include <stdlib.h>
#include <stdio.h>

struct list /* 串列結構宣告      */
{
    int num;           /* 郵寄編號          */
    char name[10];     /* 郵寄姓名          */
    struct list *next; /* 指向下一標籤      */
};
typedef struct list node; /* 定義新型態        */
typedef node *link;       /* 定義新型態指標    */

void main()
{
    link head; /* 串列的開始指標    */
    link ptr;
    int i;

    head = (link)malloc(sizeof(node)); /* 配置記憶體 */
    if (!head)                         /* 檢查指標          */
    {
        printf("記憶體配置失敗! \n");
        exit(1);
    }
    head->next = NULL; /* 設定指標初值      */
    ptr = head;        /* 將ptr指向串列開始 */
    printf("輸入六項郵寄資料:\n");
    for (i = 0; i < 6; i++) /* 建立其它節點迴路  */
    {
        printf("請輸入編號 ==> ");
        scanf("%d", &ptr->num); /* 讀取編號          */
        printf("請輸入編號(%d)的姓名 ==> ", ptr->num);
        scanf("%s", ptr->name); /* 讀取姓名          */
        ptr->next = (link)malloc(sizeof(node));
        if (!ptr->next)
        {
            printf("記憶體配置失敗! \n");
            exit(1);
        }
        ptr->next->next = NULL; /* 設定指標初值      */
        ptr = ptr->next;        /* 指向下一節點      */
    }
    printf("郵寄資料:\n");  /* 印出資料內容      */
    ptr = head;             /* 將ptr指向串列開始 */
    for (i = 0; i < 6; i++) /* 列印迴路          */
    {
        printf("編號: %d\n", ptr->num);
        printf("  姓名: %s\n", ptr->name);
        ptr = ptr->next; /* 指向下一節點      */
    }
}