#include <stdio.h>
#define row 5
#define column 10

int main()
{
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        putchar('\n');
    }
    return 0;
}

/*
#include <stdio.h>
#define ROW 5
#define COLUMN 10

int main(void) {
    int maze[ROW][COLUMN];

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            maze[i][j] = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            printf("%d\t", maze[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
*/