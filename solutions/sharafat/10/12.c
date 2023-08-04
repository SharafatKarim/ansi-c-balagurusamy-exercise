#include <stdio.h>

void multiply_matrices(int *matrix_one, int *matrix_two, int m, int n)
{
    int i, j, k;
    int result[m][m];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {

            result[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                result[i][j] += *(matrix_one + i * n + k) * *(matrix_two + k * m + j);
            }
        }
    }

    printf("Resultant matrix: \n");
    for (i = 0; i < m; i++)
    {
        printf("[");
        for (j = 0; j < m; j++)
        {
            printf(" %d ", result[i][j]);
        }
        printf("]\n");
    }
}

int main()
{
    int m, n;
    printf("Enter m and n (mxn) (nxm): ");
    scanf("%d %d", &m, &n);

    int matrix_one[m][n];
    int matrix_two[n][m];
    int i, j;

    printf("Enter matrix one elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element at (%d, %d): ", i, j);
            scanf("%d", &matrix_one[i][j]);
        }
    }

    printf("Enter matrix two elements: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter element at (%d, %d): ", i, j);
            scanf("%d", &matrix_two[i][j]);
        }
    }

    multiply_matrices((int *)matrix_one, (int *)matrix_two, m, n);
}