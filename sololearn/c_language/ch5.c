#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 2; j < 10; j++)
        {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        puts("");
    }
    return 0;
}

/*
#include <stdio.h>

int main(void) {
    for(int j = 1; j < 10; j++) {
        for(int i = 2; i < 10; i++) {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        puts("");
    }

    return 0;
}
*/