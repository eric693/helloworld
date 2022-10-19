/* file name: circularQueue.c                    */
/* 使用環形佇列處理資料--新增、刪除、輸出 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#define MAX 10

void enqueue_f(void);   /* 新增函數 */
void dequeue_f(void);   /* 刪除函數 */
void list_f(void);      /* 輸出函數 */
void flushBuffer(void); /* 清空緩衝區 */

char item[MAX][20];
int front = MAX - 1, rear = MAX - 1, tag = 0;
/* TAG為記憶FRONT所在是否有儲存資料，
   0時為沒有存放資料，1時為有存放資料 */

int main(void)
{
    char option;
    while (1)
    {
        printf("\n ******************\n");
        printf("   <1> insert\n");
        printf("   <2> delete\n");
        printf("   <3> list\n");
        printf("   <4> quit\n");
        printf(" ******************\n");
        printf(" 請輸入選項: ");
        option = getchar();
        flushBuffer();
        switch (option)
        {
        case '1':
            enqueue_f();
            break;
        case '2':
            dequeue_f();
            break;
        case '3':
            list_f();
            break;
        case '4':
            printf(" 程式結束\n");
            exit(0);
        default:
            printf("\n 選項錯誤!\n 請輸入 1, 2, 3, 或 4\n");
        }
    }
}

void enqueue_f()
{
    if (front == rear && tag == 1) /* 當佇列已滿，則顯示錯誤 */
        printf("\n\n 佇列是滿的 !\n");
    else
    {
        rear = (rear + 1) % MAX;
        printf("\n 請輸入一字串: ");
        scanf("%s", item[rear]);
        flushBuffer();
        if (front == rear)
            tag = 1;
    }
}

void dequeue_f()
{
    if (front == rear && tag == 0) /* 當資料沒有資料存在，則顯示錯誤 */
        printf("\n 佇列是空的!\n");
    else
    {
        front = (front + 1) % MAX;
        printf("\n %s 已被刪除\n", item[front]);
        if (front == rear)
            tag = 0;
    }
}

void list_f()
{
    int count = 0, i, num;
    if (front == rear && tag == 0)
        printf("\n 佇列無資料\n");
    else
    {
        printf("\n 佇列的資料如下: \n");
        printf(" ------------------\n");
        i = (front + 1) % MAX;
        while (i != rear)
        {
            printf("  %-20s\n", item[i]);
            num = ++i % MAX;
            i = num;
            count++;
        }
        printf("  %-20s\n", item[i]);
        printf(" ------------------\n");
        printf("  共有 %d 個字串\n", ++count);
    }
}

void flushBuffer()
{
    while (getchar() != '\n')
        continue;
}
