#include <stdio.h>

void calculateAverages(int m, int n, int matrix[][n], float rowAverages[], float columnAverages[])
{
    for (int i = 0; i < m; i++)
    {
        rowAverages[i] = 0;
        for (int j = 0; j < n; j++)
        {
            rowAverages[i] += matrix[i][j];
        }
        rowAverages[i] /= n;
    }

    for (int j = 0; j < n; j++)
    {
        columnAverages[j] = 0;
        for (int i = 0; i < m; i++)
        {
            columnAverages[j] += matrix[i][j];
        }
        columnAverages[j] /= m;
    }
}

void displayMatrix(int m, int n, int matrix[][n], float rowAverages[], float columnAverages[])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("%.2f\n", rowAverages[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("%.2f ", columnAverages[j]);
    }
    printf("\n");
}

int main()
{
    int m, n;

    printf("Enter the size of the matrix (m and n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    float rowAverages[m];
    float columnAverages[n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    calculateAverages(m, n, matrix, rowAverages, columnAverages);

    printf("Matrix with averages:\n");
    displayMatrix(m, n, matrix, rowAverages, columnAverages);

    return 0;
}
