#include<stdio.h>

int main()
{
    int n;
    printf("How many numbers: ");
    scanf("%d", &n);

    int pascal[n][n];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            pascal[i][j] = 0;
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    int count = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            if (pascal[i][j] != 0)
            {
                printf("%d ", pascal[i][j]);
                count += pascal[i][j];
            }
        }
        printf("\n");
    }
    printf("Total number of elements: %d\n", count);
}