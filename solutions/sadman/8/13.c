#include <stdio.h>

int main()
{
    int i, j, row, col;

    printf("Enter Row & Columns Size: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    printf("Enter Matrix Elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entered Matrix:\n");
    for (i = 0; i < row; i++)
    {
        printf("\t|");
        for (j = 0; j < col; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("    |\n");
    }

    printf("Matrix Transposed:\n");
    for (i = 0; i < col; i++)
    {
        printf("\t|");
        for (j = 0; j < row; j++)
        {
            printf("%4d", matrix[j][i]);
        }
        printf("    |\n");
    }

    return 0;
}
