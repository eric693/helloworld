// C 標準規定 int 必須具有至少 -32767 到 +32767 的範圍。C 實現可以並且經常確實具有比這更大的範圍。特定 C 實現中 int 類型的範圍可以通過頭文件
//<limits.h>中定義的 INT_MAX 和 INT_MIN

#include <limits.h>
#include <stdio.h>

int main()
{
    printf("minimum int value = %d\n"
           "maximum int value = %d\n"
           "size of int in bytes = %zu\n"
           "size of int in bits = %zu",
           INT_MIN, INT_MAX, sizeof(int),
           sizeof(int) * CHAR_BIT);
}