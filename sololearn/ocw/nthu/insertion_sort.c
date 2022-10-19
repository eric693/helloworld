#include <stdio.h>

int main()
{
    int a[10] = {2, 23, 9, 57, 19, 0, 5};
    int len = 7;
    int i = 0, j = 0;
    int temp;
    for (i = 1; i < len; i++)
    {
        temp = a[i];                       // a[i-1] sorted 所以要用a[i] compare
        j = i - 1;                         // j==0
        for (; j >= 0 && a[j] > temp; j--) //逐一比對是否前項比後項大 --再往後比對
        {
            a[j + 1] = a[j]; //這邊使用了把每項index往前推
        }
        a[j + 1] = temp; //最後空出的空間塞入key的數值
    }
    for (i = 0; i < len; i++)
    {
        printf("%d", a[i]);
        if (i < len - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
