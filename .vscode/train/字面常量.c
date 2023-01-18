// fibon
#include <stdio.h>
#include <stdlib.h>
#define LEN 20

void fill_fibonacci_numbers(int *, int);
void print(int *, int len);

int main(void)
{
    int fib[LEN] = {0};

    fill_fibonacci_numbers(fib, LEN);
    print(fib, LEN);

    return 0;
}

void fill_fibonacci_numbers(int *fib, int len)
{
    fib[0] = 0;
    fib[1] = 1;
    int i;
    for (i = 2; i < len; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void print(int *arr, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
