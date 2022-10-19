#include <stdio.h>
int main()
{
    struct score /* 成績結構宣告     */
    {
        int math;     /* 數學成績         */
        int english;  /* 英文成績         */
        int computer; /* 電腦成績         */
    };
    struct score hung; /* 結構變數hung宣告 */

    hung.math = 80; /* 設定hung的成績   */
    hung.english = 85;
    hung.computer = 83;
    /* 印出成績 */
    printf("1:  name       math     english    computer \n");
    printf("2:  Hung        %d         %d         %d    \n",
           hung.math, hung.english, hung.computer);
}