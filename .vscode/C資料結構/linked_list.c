#include <stdio.h>
#include <stdlib.h>

typedef struct t_List
{
    int id;
    char str[10];
    struct t_List *next;

} List;

List *getdata();
List *addToLast(List *head, List *np);

int main()
{
    List *np;
    while ((np = getdata()) != NULL)
    {
        np
    }

    return 0;
}

List *getdata()
{
    static int ID;
    List *ptr;
    ptr = (List *)malloc(sizeof(List));
    if (ptr == Null)
    {
        return NULL;
    }
    else
    {
        if (scanf("%9s", *ptr->str) == 1)
            ptr->id = ID++;
        ptr->next = NULL;
    }
    else
    {
        free(ptr);
        ptr = NULL;
    }
}
return ptr;
}