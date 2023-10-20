#include <stdio.h>

void matrix_addition(int *matrix_one, int *matrix_two, int row, int col, int *matrix_sum)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(matrix_sum + i * col + j ) = *(matrix_one + i * col + j) + *(matrix_two + i * col + j);
        }
    }
    return;
}

int main()
{
    int row, col;
    printf("Enter row and column: ");
    scanf("%d %d", &row, &col);

    int matrix_one[row][col];
    int matrix_two[row][col];

    printf("Row: %d, Col: %d\n", row, col);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0 ; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix_one[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0 ; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix_two[i][j]);
        }
    }

    int matrix_sum[row][col];
    matrix_addition((int *)matrix_one, (int *)matrix_two, row, col, (int *)matrix_sum);

    printf("Sum of the two matrices:\n");
    for (int i = 0 ; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix_sum[i][j]);
        }
        printf("\n");
    }
}