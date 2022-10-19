/* file name: binarySearchTree.c */
/* 利用二元搜尋樹處理資料－載入、儲存、新增、刪除、修改、輸出 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 定義student結構 */
struct student
{
    char name[20];         /* 學生姓名 */
    int score;             /* 學生成績 */
    struct student *llink; /* 左子鏈結 */
    struct student *rlink; /* 右子鏈結 */
};

void insert_f(void);                       /* 新增函數 */
void delete_f(void);                       /* 刪除函數 */
void modify_f(void);                       /* 修改函數 */
void show_f(void);                         /* 輸出函數 */
void process(char[], int);                 /* 將資料加入二元搜尋樹 */
void removing(char[]);                     /* 將資料從二元搜尋樹中移除 */
struct student *replace(struct student *); /* 尋找替代節點 */
void connecting(struct student *, char);   /* 調整鏈結 */
void inorder(struct student *);            /* 資料以中序法輸出 */
void flushBuffer(void);

struct student *search(char[]);                /* 搜尋節點 */
struct student *search_re_r(struct student *); /* 搜尋右子樹替代節點 */
struct student *search_re_l(struct student *); /* 搜尋左子樹替代節點 */
struct student *search_p(struct student *);    /* 搜尋父節點 */

struct student *root, *ptr;
int main(void)
{
    char option;

    while (1)
    {
        puts("");
        puts("********************");
        puts("     <1> insert");
        puts("     <2> delete");
        puts("     <3> modify");
        puts("     <4> show");
        puts("     <5> quit");
        puts("********************");
        printf("Enter your choice: ");
        option = getchar();
        flushBuffer();
        printf("\n");
        switch (option)
        {
        case '1':
            insert_f();
            break;
        case '2':
            delete_f();
            break;
        case '3':
            modify_f();
            break;
        case '4':
            show_f();
            break;
        case '5':
            exit(0);
        default:
            puts("選項錯誤!");
        }
    }
    return 0;
}

/* 新增函數，新增一筆新的資料 */
void insert_f(void)
{
    char name[20];
    int score;
    puts("=====INSERT DATA=====");
    printf("姓名: ");
    scanf("%s", name);
    printf("分數: ");
    scanf("%d", &score);
    flushBuffer();
    process(name, score);
}

/* 刪除函數，將資料從二元搜尋樹中刪除 */
void delete_f(void)
{
    char name[20];
    if (root == NULL)
    {
        puts("二元搜尋樹是空的!");
        return;
    }
    puts("=====DELETE DATA=====");
    printf("請輸入欲刪除的姓名: ");
    scanf("%s", name);
    flushBuffer();
    removing(name);
}

/* 修改資料，修改學生成績 */
void modify_f(void)
{
    struct student *node;
    char name[20];

    /* 判斷根節點是否為NULL */
    if (root == NULL)
    {
        puts("二元搜尋樹是空的!");
        return;
    }
    puts("=====MODIFY DATA===== ");
    printf("請輸入欲修改的姓名: ");
    scanf("%s", name);
    flushBuffer();
    if ((node = search(name)) == NULL)
        printf("%s 不在二元搜尋中!\n", name);
    else
    {
        /* 列出原資料狀況 */
        printf("姓名: %s\n", node->name);
        printf("分數: %d\n\n", node->score);
        printf("請輸入新的分數: ");
        scanf("%d", &node->score);
        flushBuffer();
        printf("%s 已被修改\n", name);
    }
}

/* 輸出函數，將資料輸出至螢幕 */
void show_f(void)
{
    /* 判斷根節點是否為NULL */
    if (root == NULL)
    {
        puts("二元搜尋樹是空的!");
        return;
    }
    puts("=====SHOW DATA=====");
    inorder(root); /* 以中序法輸出資料 */
}

/* 處理二元搜尋樹，將新增資料加入至二元搜尋樹中 */
void process(char name[], int score)
{
    struct student *node, *prev;
    /* 資料已存在則顯示錯誤 */
    if (search(name) != NULL)
    {
        printf("%s 已存在!\n", name);
        return;
    }
    ptr = (struct student *)malloc(sizeof(struct student));
    strcpy(ptr->name, name);
    ptr->score = score;
    ptr->llink = ptr->rlink = NULL;
    if (root == NULL) /* 當根節點為NULL的狀況 */
        root = ptr;
    else
    { /* 當根節點不為NULL的狀況 */
        node = root;
        while (node != NULL)
        { /* 搜尋資料插入點 */
            prev = node;
            if (strcmp(ptr->name, node->name) < 0)
                node = node->llink;
            else
                node = node->rlink;
        }
        if (strcmp(ptr->name, prev->name) < 0)
            prev->llink = ptr;
        else
            prev->rlink = ptr;
    }
}

/* 將資料從二元搜尋樹中移除 */
void removing(char name[])
{
    struct student *del_node;
    if ((del_node = search(name)) == NULL) /* 找不到資料則顯示錯誤 */
    {
        printf("%s 不在此二元搜尋樹中!\n", name);
        return;
    }
    /* 節點不為樹葉節點的狀況 */
    if (del_node->llink != NULL || del_node->rlink != NULL)
        del_node = replace(del_node);
    else /* 節點為樹葉節點的狀況 */
        if (del_node == root)
            root = NULL;
        else
            connecting(del_node, 'n');
    free(del_node); /* 釋放記憶體 */
    printf("%s 已被刪除!\n", name);
}

/* 尋找刪除非樹葉節點的替代節點 */
struct student *replace(struct student *node)
{
    struct student *re_node;
    /* 當右子樹找不到替代節點，會搜尋左子樹是否存在替代節點 */
    if ((re_node = search_re_r(node->rlink)) == NULL)
        re_node = search_re_l(node->llink);
    if (re_node->rlink != NULL) /* 當替代節點有右子樹存在的狀況 */
        connecting(re_node, 'r');
    else if (re_node->llink != NULL) /* 當替代節點有左子樹存在的狀況 */
        connecting(re_node, 'l');
    else /* 當替代節點為樹葉節點的狀況 */
        connecting(re_node, 'n');
    strcpy(node->name, re_node->name);
    node->score = re_node->score;
    return re_node;
}

/* 調整二元搜尋樹的鏈結，link 為 r 表示處理右鏈結，為 l 表處理左鏈結，
   為 m 則將鏈結指向 NULL */
void connecting(struct student *node, char link)
{
    struct student *parent;
    parent = search_p(node); /* 搜尋父節點 */
    /* 節點為父節點左子樹的狀況 */
    if (strcmp(node->name, parent->name) < 0)
        if (link == 'r') /* link為r */
            parent->llink = node->rlink;
        else /* link為m */
            parent->llink = NULL;
    else                 /* 節點為父節點右子樹的狀況 */
        if (link == 'l') /* link為l */
            parent->rlink = node->llink;
        else /* link為m */
            parent->rlink = NULL;
}

/* 以中序法輸出資料，採遞迴方式 */
void inorder(struct student *node)
{
    if (node != NULL)
    {
        inorder(node->llink);
        printf("%-10s %d\n", node->name, node->score);
        inorder(node->rlink);
    }
}

/* 搜尋target所在節點 */
struct student *search(char target[])
{
    struct student *node;
    node = root;
    while (node != NULL)
    {
        if (strcmp(target, node->name) == 0)
            return node;
        else
            /* target小於目前節點，往左搜尋 */
            if (strcmp(target, node->name) < 0)
                node = node->llink;
            else /* target大於目前節點，往右搜尋 */
                node = node->rlink;
    }
    return node;
}

/* 搜尋右子樹替代節點 */
struct student *search_re_r(struct student *node)
{
    struct student *re_node;
    re_node = node;
    while (re_node != NULL && re_node->llink != NULL)
        re_node = re_node->llink;
    return re_node;
}

/* 搜尋左子樹替代節點 */
struct student *search_re_l(struct student *node)
{
    struct student *re_node;
    re_node = node;
    while (re_node != NULL && re_node->rlink != NULL)
        re_node = re_node->rlink;
    return re_node;
}

/* 搜尋node的父節點 */
struct student *search_p(struct student *node)
{
    struct student *parent;
    parent = root;
    while (parent != NULL)
    {
        if (strcmp(node->name, parent->name) < 0)
        {
            if (strcmp(node->name, parent->llink->name) == 0)
                return parent;
            else
                parent = parent->llink;
        }
        else
        {
            if (strcmp(node->name, parent->rlink->name) == 0)
                return parent;
            else
                parent = parent->rlink;
        }
    }
    return NULL;
}

void flushBuffer()
{
    while (getchar() != '\n')
        continue;
}
