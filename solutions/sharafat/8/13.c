#include<stdio.h>

int main()
{
    int row, column;
    printf("Enter row and column of matrix: ");
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    int i, j;
    for ( i = 0; i < row; i++ )
    {
        for ( j = 0; j < column; j++ )
        {
            printf("Enter row %d and column %d of matrix: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    int transpose_matrix[column][row];
    for ( i = 0; i < row; i++ )
    {
        for ( j = 0; j < column; j++ )
        {
            transpose_matrix[j][i] = matrix[i][j];
        }
    }
    printf("Transpose matrix: \n");
    for ( i = 0; i < column; i++ )
    {
        for ( j = 0; j < row; j++ )
        {
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }
}