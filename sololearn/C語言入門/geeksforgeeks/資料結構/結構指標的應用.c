#include <stdlib.h>

int main()
{
    struct score /* 成績結構宣告     */
    {
        char id;      /* 學生學號         */
        int math;     /* 數學成績         */
        int english;  /* 英文成績         */
        int computer; /* 電腦成績         */
        struct score *next;
    };
    typedef struct score node; /* 定義新型態       */
    node first, second;        /* 結構變數宣告     */
    node *begin;               /* 結構指標變數宣告 */

    first.id = 'C'; /* 設定first的成績  */
    first.math = 80;
    first.english = 85;
    first.computer = 83;
    first.next = NULL; /* 初始結構指標     */
    second.id = 'A';   /* 設定second的成績 */
    second.math = 75;
    second.english = 91;
    second.computer = 88;
    second.next = NULL; /* 初始結構指標     */

    first.next = &second; /* 連接兩個結構指標 */
    begin = &first;

    printf("  id       math     english    computer \n");
    while (begin != NULL) /* 列印所連接的結構 */
    {
        printf("  %c        %d         %d         %d    \n",
               begin->id, begin->math, begin->english, begin->computer);
        begin = begin->next; /* 下一個結構 */
    }
}