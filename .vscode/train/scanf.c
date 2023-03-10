/*
#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("請輸入兩個數字，中間使用空白區隔）：");
    scanf("%d %d", &number1, &number2);
    printf("你輸入的數字：%d %d\n", number1, number2);

    printf("請再輸入兩個數字，中間使用-號區隔）：");
    scanf("%d-%d", &number1, &number2);
    printf("你輸入的數字：%d-%d\n", number1, number2);

    return 0;
}



#include <stdio.h>

int main()
{

    char *str = "hello";
    void *add = str;

    printf("%s\t%p\n", str, add);

    str = "world";
    add = str;
    printf("%s\t%p\n", str, add);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 80

void inToPostfix(char *, char *); // 中序轉後序
int priority(char);               // 運算子優先權

int main(void)
{
    char infix[MAX] = {'\0'};
    char postfix[MAX] = {'\0'};

    printf("中序運算式：");
    scanf("%s", infix);
    inToPostfix(infix, postfix);

    int i;
    for (i = 0; postfix[i] != '\0'; i++)
    {
        printf("%c", postfix[i]);
    }

    return 0;
}

void inToPostfix(char *infix, char *postfix)
{
    char stack[MAX] = {'\0'};
    int i, j, top;
    for (i = 0, j = 0, top = 0; infix[i] != '\0'; i++)
        switch (infix[i])
        {
        case '(': // 運算子堆疊
            stack[++top] = infix[i];
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            while (priority(stack[top]) >= priority(infix[i]))
            {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i]; // 存入堆疊
            break;
        case ')':
            while (stack[top] != '(')
            { // 遇 ) 輸出至 (
                postfix[j++] = stack[top--];
            }
            top--; // 不輸出 (
            break;
        default: // 運算元直接輸出
            postfix[j++] = infix[i];
        }
    while (top > 0)
    {
        postfix[j++] = stack[top--];
    }
}

int priority(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return 0;
    }
}
*/

// A program to check if a given binary tree is complete or
// not
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 500

/* A binary tree node has data, a pointer to left child
and a pointer to right child */
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/* function prototypes for functions needed for Queue data
structure. A queue is needed for level order traversal */
struct node **createQueue(int *, int *);
void enQueue(struct node **, int *, struct node *);
struct node *deQueue(struct node **, int *);
bool isQueueEmpty(int *front, int *rear);

/* Given a binary tree, return true if the tree is complete
else false */
bool isCompleteBT(struct node *root)
{
    // Base Case: An empty tree is complete Binary Tree
    if (root == NULL)
        return true;

    // Create an empty queue
    int rear, front;
    struct node **queue = createQueue(&front, &rear);
    enQueue(queue, &rear, root);

    // Create a flag variable which will be set true
    // when a non full node is seen
    bool flag = false;

    // Do level order traversal using queue.

    while (!isQueueEmpty(&front, &rear))
    {
        struct node *temp_node = deQueue(queue, &front);

        if (!temp_node)
        {
            // If we have seen a NULL node,
            // we set the flag to true
            flag == true;
        }
        else
        {
            // If that NULL node
            // is not the last node
            // then return false
            if (flag == true)
            {
                return false;
            }
            // Push both nodes
            // even if there are null
            enQueue(queue, &rear,
                    temp_node->left); // Enqueue Left Child
            enQueue(
                queue, &rear,
                temp_node->right); // Enqueue right Child
        }
    }
    return true;
}

/*UTILITY FUNCTIONS*/
struct node **createQueue(int *front, int *rear)
{
    struct node **queue = (struct node **)malloc(
        sizeof(struct node *) * MAX_Q_SIZE);

    *front = *rear = 0;
    return queue;
}

void enQueue(struct node **queue, int *rear,
             struct node *new_node)
{
    queue[*rear] = new_node;
    (*rear)++;
}

struct node *deQueue(struct node **queue, int *front)
{
    (*front)++;
    return queue[*front - 1];
}

bool isQueueEmpty(int *front, int *rear)
{
    return (*rear == *front);
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

/* Driver program to test above functions*/
int main()
{
    /* Let us construct the following Binary Tree which
    is not a complete Binary Tree
        1
    /        \
    2         3
    / \          \
    4 5	           6
    */

    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);

    if (isCompleteBT(root) == true)
        printf("Complete Binary Tree");
    else
        printf("NOT Complete Binary Tree");

    return 0;
}

// This code is contributed by Sania Kumari Gupta (kriSania804)
