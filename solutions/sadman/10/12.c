#include <stdio.h>

void multiplyMatrices(int m, int n, int matrix1[][n], int matrix2[][m], int result[][m]);

int main()
{
    int m, n;

    printf("Enter the size of the matrices (m and n): ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n];
    int matrix2[n][m];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int result[m][m];
    multiplyMatrices(m, n, matrix1, matrix2, result);

    printf("Product of the matrices:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int m, int n, int matrix1[][n], int matrix2[][m], int result[][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }
}
