#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
};
typedef struct node list;
typedef list *link;
char A1[9] = {'S', 't', 'r', 'u', 'c', 't', 'u', 'r', 'e'};
link create(char *A, int max)
{
    link head;
    link p, p1;
    int n;
    head = (link)malloc(sizeof(list));
    if (!head)
        return NULL;
    head->data = A[0];
    head->next = NULL;
    p = head;
    for (n = 1; n < max; n++)
    {
        p1 = (link)malloc(sizeof(list));
        if (!p1)
            return NULL;
        p1->data = A[n];
        p1->next = NULL;
        p->next = p1;
        p = p->next;
    }
    return head;
}
display(link head)
{
    if (head != NULL)
    {
        printf("%c->", head->data);
        display(head->next);
    }
}
int main()
{
    link p;
    clrscr();
    printf("The list:");
    p = create(A1, 9);
    display(p);
    printf("NULL");
}
