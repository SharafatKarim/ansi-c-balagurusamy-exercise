#include<stdio.h>

int main()
{
    int matrix[5][5];
    int i, j, k;

    for (i=0; i<5; i++)
    {
        for (j=4, k=0; j>=0; k++, j--)
        {
            if (i == j)
                matrix[i][k] = 0;
            else if (i < j)
                matrix[i][k] = 1;
            else
                matrix[i][k] = -1;
        }
    }

    printf("\n");

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}