#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3];
    float avg = 0.0f;

    printf("The matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = rand() % 100;
            avg += matrix[i][j];
            printf("matrix[%d][%d] = %2d, ", i, j, matrix[i][j]);
        }
        printf("\n");
    }

    avg = avg / 9.0;
    printf("Average:%f\n", avg);

    return 0;
}