#include <stdio.h>

void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols)
{
    int totalElements = rows * cols;

    for (int i = 0; i < totalElements; i++)
    {
        result[i] = mat1[i] + mat2[i];
    }
}

void printMatrix(int *matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols];
    int mat2[rows][cols];
    int result[rows][cols];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrices((int *)mat1, (int *)mat2, (int *)result, rows, cols);

    printf("Resultant matrix:\n");
    printMatrix((int *)result, rows, cols);

    return 0;
}
