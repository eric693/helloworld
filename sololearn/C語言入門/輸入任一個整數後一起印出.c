#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;   //儲存輸入的數字
    int length = 0; //目前已經數入的數字個數
    int larger1[1] = {1};
    numbers = larger1;
    length++;

    for (int i = 0; i < length; i++) //數每個輸入的數字
    {
        printf("%d", numbers[i]);
    }
    printf("\n");

    int larger2[2] = {2, 3};
    numbers = larger2;
    length++;
    for (int i = 0; i < length; i++)
    {
        printf("%d", numbers[i]);
    }

    printf("\n");
    return 0;
}