#include <stdio.h>
int main()
{
    int i;
    int list[5] = {25, 30, 18, 7, 10};
    int largest = 0;
    for (i = 0; i < 5; i++)
        if (list[i] > largest)
            largest = list[i];
    printf("最大數為%d", largest);
}
