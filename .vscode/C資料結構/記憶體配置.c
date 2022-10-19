/* ======================================== */
/*    程式實例: ch4_5.c                     */
/*    動態資料結構的宣告和記憶體處理        */
/* ======================================== */
#include <stdlib.h>
#include <stdio.h>

struct list
{
    int num;
    char name[10];
    char address[100];
    struct list *next;
};

typedef struct list node;
typedef node *link;

int main()
{
    link ptr;
    ptr = (link)malloc(sizeof(node));
    if (!ptr)
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
