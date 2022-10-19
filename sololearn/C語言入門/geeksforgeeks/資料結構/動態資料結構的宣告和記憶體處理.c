#include <stdlib.h>
#include <stdio.h>

struct list /* 串列結構宣告     */
{
    int num;           /* 郵寄編號         */
    char name[10];     /* 郵寄姓名         */
    char address[50];  /* 郵寄地址         */
    struct list *next; /* 指向下一標籤     */
};
typedef struct list node; /* 定義新型態       */
typedef node *link;       /* 定義新型態指標   */

void main()
{
    link ptr;

    ptr = (link)malloc(sizeof(node)); /* 配置記憶體 */
    if (!ptr)                         /* 檢查指標         */
    {
        printf("記憶體配置失敗! \n");
        exit(1);
    }
    printf("請輸入編號 ==> ");
    scanf("%d", &ptr->num); /* 讀取編號         */
    printf("請輸入姓名 ==> ");
    scanf("%s", ptr->name); /* 讀取姓名         */
    printf("請輸入地址 ==> ");
    scanf("%s", ptr->address); /* 讀取地址         */
    ptr->next = NULL;          /* 設定指標初值     */

    printf("郵寄資料:\n");
    printf("編號: %d\n", ptr->num); /* 印出資料項       */
    printf("  姓名: %s\n", ptr->name);
    printf("  地址: %s\n", ptr->address);
}