/* sList.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 函式的原型宣告 */
void insert(void);
void del(void);
void modify(void);
void display(void);
void processing(void);

/* 宣告一個結構的模版 */
struct Node
{
    long int id;
    char name[10];
    double score;
    struct Node *next;
};

/* 定義以下的結構全域變數 */
struct Node *head, *pNode, *current, *prev, temp;

/* 定義一指向 FILE 的指標 */
FILE *fptr;

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    head->next = NULL;

    /* 利用一選單讓使用選擇功能項目 */
    int choice;
    do
    {
        printf("鏈結串列的運作選單\n");
        printf("1. 加入一節點\n");
        printf("2. 刪除一節點\n");
        printf("3. 修改一節點\n");
        printf("4. 顯示所有節點\n");
        printf("5. 結束\n");
        printf("請選擇: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            modify();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\n程式結束\n");
            exit(0);
        default:
            printf("輸入號碼不正確，請重新輸入\n");
        }
        printf("\n");
    } while (choice != 5);
    getchar();
    return 0;
}

/* 按照分數由大至小加入一節點於鏈結串列 */
void insert()
{
    /* 利用 malloc() 函式配置記憶體給 n1 */
    pNode = malloc(sizeof(struct Node));
    printf("\n請輸入ID: ");
    scanf("%ld", &pNode->id);
    printf("請輸入姓名: ");
    scanf("%s", pNode->name);
    printf("請輸入分數: ");
    scanf("%lf", &pNode->score);

    /* 加入一節點於鏈結串列 */
    current = head->next;
    prev = head;
    /* 先判斷鏈結串列是否為空 */
    if (current == NULL)
    {
        head->next = pNode;
        pNode->next = NULL;
    }
    /* 若不是空的，則找適當的位置加入於鏈結串列 */
    else
    {
        while ((current != NULL) && (pNode->score < current->score))
        {
            prev = current;
            current = current->next;
        }
        prev->next = pNode;
        pNode->next = current;
    }
}

/* 刪除某一節點*/
void del()
{
    long int deleteID;
    /* 將 current 指標指向 head 的下一個節點 */
    current = head->next;
    prev = head;
    /* 先判斷鏈結串列是否為空 */
    if (current != NULL)
    {
        /* 若不是空的，則找尋欲刪除的節點 */
        printf("\n請輸入欲刪除的 ID: ");
        scanf("%ld", &deleteID);
        /* 找尋欲刪除的節點 */
        while ((current != NULL) && (current->id != deleteID))
        {
            prev = current;
            current = current->next;
        }
        /* 若找到，則將它刪除 */
        if (current != NULL)
        {
            prev->next = current->next;
            current->next = NULL;
            printf("ID: %ld 已刪除\n", current->id);
            free(current);
        }
        /* 若沒有找到，則輸出找不到欲刪除節點的訊息*/
        else
        {
            printf("\n找不到欲刪除的節點\n");
        }
    }
    /* 若是空的，則輸出鏈結串列是空的訊息 */
    else
    {
        printf("鏈結串列是空的\n");
    }
}

/* 修改某一節點 */
void modify()
{
    struct Node *temp;
    long int modifyID;
    double modifyScore;
    int flag = 0;
    printf("\n請輸入欲修改節點的 ID: ");
    scanf("%ld", &modifyID);
    current = head->next;
    prev = head;

    /* 找尋欲修改的節點 */
    while (current != NULL)
    {
        if (current->id == modifyID)
        {
            printf("目前欲修改節點的資料如下:\n");
            printf("%6ld %10s %8.1f\n\n", current->id,
                   current->name, current->score);
            printf("請輸入欲修改的分數: ");
            scanf("%lf", &modifyScore);
            current->score = modifyScore;
            flag = 1;
            break;
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
    /* 判斷是否有找到欲修改的節點 */
    if (flag != 0)
    {
        /* 將 current 的節點指定給 temp */
        temp = current;
        prev->next = current->next;
        /* 將 temp 節點加入於鏈結串列 */
        current = head->next;
        prev = head;
        while ((current != NULL) &&
               (temp->score < current->score))
        {
            prev = current;
            current = current->next;
        }
        prev->next = temp;
        temp->next = current;
    }
    else
    {
        printf("找不到欲修改的節點\n");
    }
}

/* 顯示鏈結串列的所有節點資料 */
void display()
{
    /* 印出鏈結串列所有節點的資料 */
    current = head->next;

    /* 檢視鏈結串列是否為空 */
    if (current != NULL)
    {
        printf("\n%6s %10s %8s\n", "ID", "Name", "Score");
        while (current != NULL)
        {
            printf("%6ld %10s %8.1f\n", current->id, current->name, current->score);
            /* 將指標移到下一個節點 */
            current = current->next;
        }
    }
    /* 若是空的，則輸出鏈結串列無資料 */
    else
    {
        printf("\n鏈結串列無資料\n");
    }
}
