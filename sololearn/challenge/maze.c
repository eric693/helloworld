/*說明老鼠走迷宮是遞迴求解的基本題型，我們在二維陣列中使用2表示迷宮牆壁，
使用1來表示老鼠的行走路徑，試以程式求出由入口至出口的路徑。
解法老鼠的走法有上、左、下、右四個方向，在每前進一格之後就選一個方向前進，
無法前進時退回選擇下一個可前進方向，如此在陣列中依序測試四個方向，直到走到出口為止，
這是遞迴的基本題，請直接看程式應就可以理解。*/
#include <stdio.h>
#include <stdlib.h>
int visit(int, int);
//迷宮矩陣，2代表牆壁，0代表通道
int maze[7][7] = {{2, 2, 2, 2, 2, 2, 2},
                  {2, 0, 0, 0, 0, 0, 2},
                  {2, 0, 2, 0, 2, 0, 2},
                  {2, 0, 0, 2, 0, 2, 2},
                  {2, 2, 0, 2, 0, 2, 2},
                  {2, 0, 0, 0, 0, 0, 2},
                  {2, 2, 2, 2, 2, 2, 2}};

int startI = 1, startJ = 1; // 入口
int endI = 5, endJ = 5;     // 出口
int success = 0;

int main(void)
{
    int i, j;

    printf("顯示迷宮：\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (maze[i][j] == 2)
                printf("*");
            else
                printf("  ");
        }
        printf("\n");
    }

    if (visit(startI, startJ) == 0)
    {
        printf("\n沒有找到出口！\n");
    }
    else
    {
        printf("\n顯示路徑：\n");
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 7; j++)
            {
                if (maze[i][j] == 2)
                    printf("*");
                else if (maze[i][j] == 1)
                    printf("◇");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }

    return 0;
}

int visit(int i, int j)
{
    //該點走過，標記為1
    maze[i][j] = 1;
    //走到終點，成功
    if (i == endI && j == endJ)
        success = 1;
    //向四個方向遞迴呼叫函式visit()
    if (success != 1 && maze[i][j + 1] == 0)
        visit(i, j + 1);
    if (success != 1 && maze[i + 1][j] == 0)
        visit(i + 1, j);
    if (success != 1 && maze[i][j - 1] == 0)
        visit(i, j - 1);
    if (success != 1 && maze[i - 1][j] == 0)
        visit(i - 1, j);

    //該點走過，但沒成功，則該點重新置為0
    if (success != 1)
        maze[i][j] = 0;

    return success;
}
