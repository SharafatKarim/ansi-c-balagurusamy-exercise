#include <stdio.h>

void input_matrix(int *matrix, int rows, int cols)
{
    int i, j;
    printf("Enter matrix elements: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i * cols + j]);
    }
}

void print_matrix(int *matrix, int rows, int cols)
{
    int i, j;
    printf("Matrix: \n");
    for (i = 0; i < rows; i++)
    {
        printf("[");
        for (j = 0; j < cols; j++)
            printf(" %d ", matrix[i * cols + j]);
        printf("]\n");
    }
}

void print_row_averages(int *matrix, int rows, int cols)
{
    int i, j;
    printf("Row averages: \n");
    for (i = 0; i < rows; i++)
    {
        int sum = 0;
        for (j = 0; j < cols; j++)
            sum += matrix[i * cols + j];
        printf("%d\n", sum / cols);
    }
}

void print_col_averages(int *matrix, int rows, int cols)
{
    int i, j;
    printf("Column averages: \n");
    for (i = 0; i < cols; i++)
    {
        int sum = 0;
        for (j = 0; j < rows; j++)
            sum += matrix[j * cols + i];
        printf("%d\n", sum / rows);
    }
}

int main()
{
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    input_matrix(&matrix[0][0], m, n);

    print_matrix(&matrix[0][0], m, n);
    print_row_averages(&matrix[0][0], m, n);
    print_col_averages(&matrix[0][0], m, n);

    return 0;
}
