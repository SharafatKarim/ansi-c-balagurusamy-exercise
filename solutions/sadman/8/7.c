#include <stdio.h>
#include <conio.h>
int main()
{

    int i, j, A[100][100], B[100][100], c[100][100],
        d[100][100], row1, col1, row2, col2, k, sum = 0,
                                                result[100][100];
    printf("number of row and col for A matrix:\n");
    scanf("%d %d", &row1, &col1);
    // a matrix
    // input
    printf("A matrix is:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    // b matrix
    // input
    printf("number of row and col for B matrix:\n");
    scanf("%d %d", &row2, &col2);

    printf("B matrix is:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    // A output
    printf("A=");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    // b output
    printf("\n");
    printf("B=");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("\t%d", B[i][j]);
        }
        printf("\n");
    }
    // sum
    printf("sum of matrix:\n");

    if (row1 == row2 && col1 == col2)
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                c[i][j] = A[i][j] + B[i][j];
                printf("\t%d", c[i][j]);
            }

            printf("\n");
        }
    }
    else
        printf("math error");
    // multiply
    printf("multiply result of matrix:\n");
    if (col1 == row2)
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                result[i][j] = 0;
                for (k = 0; k < col1; k++)
                {

                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("\t%d", result[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("math error");
}