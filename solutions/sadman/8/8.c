#include <stdio.h>

int main()
{
    int matrix[5][5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j < 5 - i - 1)
                matrix[i][j] = 1;
            else if (j > 5 - i - 1)
                matrix[i][j] = -1;
            else
                matrix[i][j] = 0;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
