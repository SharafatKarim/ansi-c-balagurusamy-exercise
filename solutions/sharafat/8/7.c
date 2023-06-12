#include<stdio.h>

int main()
{
    int element_number_of_matrix;
    printf("Enter element number of matrix: ");
    scanf("%d", &element_number_of_matrix);

    int first_matrix[element_number_of_matrix][element_number_of_matrix];
    int second_matrix[element_number_of_matrix][element_number_of_matrix];

    int i, j;
    for ( i = 0; i < element_number_of_matrix; i++ )
    {
        for ( j = 0; j < element_number_of_matrix; j++ )
        {
            printf("Enter row %d and column %d of first matrix: ", i+1, j+1);
            scanf("%d", &first_matrix[i][j]);
        }
    }
    for ( i = 0; i < element_number_of_matrix; i++ )
    {
        for ( j = 0; j < element_number_of_matrix; j++ )
        {
            printf("Enter row %d and column %d of second matrix: ", i+1, j+1);
            scanf("%d", &second_matrix[i][j]);
        }
    }

    int multiplied_matrix[element_number_of_matrix][element_number_of_matrix];
    int k;
    for ( i = 0; i < element_number_of_matrix; i++ )
    {
        for ( j = 0; j < element_number_of_matrix; j++ )
        {
            multiplied_matrix[i][j] = 0;
            for ( k = 0; k < element_number_of_matrix; k++ )
            {
                multiplied_matrix[i][j] += first_matrix[i][k] * second_matrix[k][j];
            }
        }
    }

    printf("Multiplied matrix: \n");

    for ( i = 0; i < element_number_of_matrix; i++ )
    {
        for ( j = 0; j < element_number_of_matrix; j++ )
        {
            printf("%d ", multiplied_matrix[i][j]);
        }
        printf("\n");
    }

}