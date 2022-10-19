// 二分搜尋
// binary search
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// n=5
// 1,2,3,4,5
// value[4]->5
bool search(int value, int values[], int n)
{
    int L = 0;     //最左邊有可能的數
    int R = n - 1; //最右邊最有可能的數
    int M;

    // L<R
    while (L <= R)
    {
        M = (L + R) / 2;

        // value:3, 2 5 8
        if (values[M] == value)
            return true;
        if (values[M] > value)
        {
            R = M - 1;
        }
        else
        { // values[M] < value
            L = M + 1;
        }
    }
    return false;
}