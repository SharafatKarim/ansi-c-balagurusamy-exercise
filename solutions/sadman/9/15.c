#include <stdio.h>

int main()
{
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf("   ");
        }
        for (k = i; k <= 2 * i - 1; k++)
        {
            printf("%-3d", k);
        }

        for (k = 2 * i - 2; k >= i; k--)
        {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}
