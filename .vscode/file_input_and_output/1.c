#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *temp = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (target == nums[i] + nums[j])
            {
                temp = malloc(sizeof(int) * 2);
                temp[0] = i;
                temp[1] = j;
                printf("%d and %d\n", temp[0], temp[1]);
                *returnSize = 2;
                return temp;
            }
        }
    }
    return temp;
}