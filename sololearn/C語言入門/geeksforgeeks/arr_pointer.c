#include <stdio.h>

void findSum1(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum = sum + arr[i];
    printf("the sum of the array is: %d\n", sum);
}

void findSum2(int *arr)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum = sum + arr[i];
    printf("the sum of the array is: %d\n", sum);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    findSum1(arr);
    findSum2(arr);
    return 0;
}