/*
ptr
指向要排序的陣列的起始位置的指標
count
在陣列中有幾個元素要排序
size
在陣列中每個元素的大小，以 byte 為單位
comp
比較用的函數，回傳正數代表第一個引數比第二個引數小，回傳負數代表第一個引數比第二個引數大，回傳0代表兩個引數相等
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int compare_int(const void *a, const void *b)
{
    const int *va = (const int *)a;
    const int *vb = (const int *)b;
    return *va - *vb;
}

int compare_double(const void *a, const void *b)
{
    const double *da = (const double *)a;
    const double *db = (const double *)b;
    return (*da > *db) - (*da < *db);
}

int main(void)
{
    int data1[SIZE];
    double data2[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        data1[i] = rand() % SIZE;
        data2[i] = (double)rand() / RAND_MAX;
    }

    printf("original: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data1[i]);
    }
    printf("\n");

    printf("  sorted: ");
    qsort(data1, SIZE, sizeof(int), compare_int);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data1[i]);
    }
    printf("\n");

    printf("original: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", data2[i]);
    }
    printf("\n");

    printf("  sorted: ");
    qsort(data2, SIZE, sizeof(double), compare_double);
    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", data2[i]);
    }
    printf("\n");

    return 0;
}