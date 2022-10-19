#include "stdio.h"
#include "stdlib.h"
 
 void forward_null(void)
         {
           char* p = 0;
    //   CID 10007: Explicit null dereferenced (FORWARD_NULL) [select issue]
           *p = 'a';
         }
 
  reverse_null(char* input)
    {
         *input = 12;
    //   CID 10012: Dereference before null check (REVERSE_INULL) [select issue]
                if (input == NULL)
                        return;
     }
 
  resource_leak(void)
         {
    // 1. alloc_fn: Storage is returned from allocation function malloc.
    // 2. var_assign: Assigning: p = storage returned from malloc(4UL).
                char *p = malloc(4);
                p[0] = 12;
    
        }
 
 void resource_leak_2(void)
         {
                 char *p = malloc(4);
                 char *q = malloc(12);
                 if (!p || !q)
    //   CID 10002: Resource leak (RESOURCE_LEAK) [select issue]
    //   CID 10003: Resource leak (RESOURCE_LEAK) [select issue]
                         return;
    //   CID 10003: Resource leak (RESOURCE_LEAK) [select issue]
    //   CID 10002: Resource leak (RESOURCE_LEAK) [select issue]
         }
 
 void use_after_free(void)
         {
                 char *p = malloc(4);
                 free(p);
    //   CID 10005: Write to pointer after free (USE_AFTER_FREE) [select issue]
                 *p = 'a';
         }
 
 struct bigger_than_ptr { int a; int b; int c; int d; };
 
 void size_check(void)
         {
                 struct bigger_than_ptr *p;
    //   CID 10008: Wrong sizeof argument (SIZEOF_MISMATCH) [select issue]
                 p = malloc(sizeof(struct bigger_than_ptr *));
    //   CID 10010: Resource leak (RESOURCE_LEAK) [select issue]
         }
 
 int some_func(void);
 
 void dead_code(void)
         {
                 int x = some_func();
                 if (x) {
                         if (!x) {
    //   CID 10006: Logically dead code (DEADCODE) [select issue]
                                 x++;
                                 return;
                         }
                 }
         }
 
 int read(int, char*, int);
 
 void negative_returns(void)
         {
                 char buf[10];
                 int j = read(1, buf, 8);
    //   CID 10013: Negative array index write (NEGATIVE_RETURNS) [select issue]
                 buf[j] = '\0';
         }
 
 void reverse_negative(void)
         {
                 int j = some_func();
                 char buf[10];
                 buf[j] = '\0';
    //   CID 10011: Negative array index read (REVERSE_NEGATIVE) [select issue]
                 if (j < 0)
                         return;
         }
 
uninit(void)
         {
                 char* p;
    //   CID 10009: Uninitialized pointer write (UNINIT) [select issue]
                 *p = 'a';
        }

  overrun_static(void)
         {
                 char buf[10];
                 int i;
                 for (i = 0; i <= 10; i++)
      
                         buf[i] = '\0';
         }
 
#define NO_MEM -1
#define OK 0
#define OTHER_ERROR -2

int paths() {
  char *p = malloc(12);

  if (!p)
    return NO_MEM;

  if (!some_other_function()) {
    free(p);
    return OTHER_ERROR;
  }
    if (!yet_another_function()) {
    //   CID 10001: Resource leak (RESOURCE_LEAK) [select issue]
       return OTHER_ERROR;
 }

  do_some_things(p);

  free(p);
  return OK;
}