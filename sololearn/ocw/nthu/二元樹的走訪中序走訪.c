#include <stdlib.h>
#include <stdio.h>

struct tree /* 樹的結構宣告       */
{
    int data;           /* 節點資料           */
    struct tree *left;  /* 指向左子樹的指標   */
    struct tree *right; /* 指向右子樹的指標   */
};
typedef struct tree treenode; /* 樹的結構新型態     */
typedef treenode *btree;      /* 宣告樹節點指標型態 */

/* ---------------------------------------- */
/*  插入二元樹的節點                        */
/* ---------------------------------------- */
btree insert_node(btree root, int value)
{

    btree newnode; /* 樹根指標           */
    btree current; /* 目前樹節點指標     */
    btree back;    /* 父節點指標         */

    /* 建立新節點記憶體 */
    newnode = (btree)malloc(sizeof(treenode));
    newnode->data = value; /* 建立節點內容       */
    newnode->left = NULL;  /* 設定指標初值       */
    newnode->right = NULL; /* 設定指標初值       */
    if (root == NULL)      /* 是否是根節點       */
    {
        return newnode; /* 傳回新節點位置     */
    }
    else
    {
        current = root; /* 保留目前樹指標     */
        while (current != NULL)
        {
            back = current;              /* 保留父節點指標     */
            if (current->data > value)   /* 比較節點值  */
                current = current->left; /* 左子樹      */
            else
                current = current->right; /* 右子樹      */
        }
        if (back->data > value)   /* 接起父子的鏈結     */
            back->left = newnode; /* 左子樹             */
        else
            back->right = newnode; /* 右子樹             */
    }
    return root; /* 傳回樹根指標       */
}

/* ---------------------------------------- */
/*  建立二元樹                              */
/* ---------------------------------------- */
btree create_btree(int *data, int len)
{
    btree root = NULL; /* 樹根指標           */
    int i;

    for (i = 0; i < len; i++) /* 用迴路建立樹狀結構 */
        root = insert_node(root, data[i]);
    return root;
}

/* ---------------------------------------- */
/*  二元樹中序走訪                          */
/* ---------------------------------------- */
void inorder(btree ptr)
{
    if (ptr != NULL) /* 終止條件           */
    {
        inorder(ptr->left);           /* 左子樹             */
        printf("[%2d]\n", ptr->data); /* 列印節點內容     */
        inorder(ptr->right);          /* 右子樹             */
    }
}

/* ---------------------------------------- */
/*  主程式: 建立二元樹且用中序走訪列印出來. */
/* ---------------------------------------- */
int main()
{
    btree root = NULL; /* 樹根指標           */

    /* 二元樹節點資料 */
    int data[9] = {5, 6, 4, 8, 2, 3, 7, 1, 9};
    root = create_btree(data, 9); /* 建立二元樹         */
    printf("樹的節點內容 \n");
    inorder(root); /* 中序走訪二元樹     */
}