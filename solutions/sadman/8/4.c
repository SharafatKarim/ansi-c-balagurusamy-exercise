#include <stdio.h>

int main()
{
    int i, j, pascal[11][11] = {0};
    printf("\t\t\t\t\t Pascal Triangle\n");

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == j)
            {
                pascal[i][j] = 1;
                break;
            }

            if (j == 1)
            {
                pascal[i][j] = 1;
            }

            else
            {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {

            if (i + 1 == j)
                break;
            else
                printf("%d\t", pascal[i][j]);
        }
        printf("\n");
    }
    return 0;
}