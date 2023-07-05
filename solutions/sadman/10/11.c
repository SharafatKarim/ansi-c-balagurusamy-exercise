#include <stdio.h>

int find_largest_element(int m, int n, int matrix[m][n])
{
    int largest_element = matrix[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > largest_element)
            {
                largest_element = matrix[i][j];
            }
        }
    }

    return largest_element;
}

int main()
{
    int m, n;
    int matrix[100][100];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int largest_element = find_largest_element(m, n, matrix);
    printf("The largest element in the matrix is: %d\n", largest_element);

    return 0;
}
