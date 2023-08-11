#include <stdio.h>

int find_largest(int *matrix, int rows, int cols) {
    int i, j, largest = *matrix;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (*(matrix + i * cols + j) > largest) {
                largest = *(matrix + i * cols + j);
            }
        }
    }
    return largest;
}

int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter matrix elements: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int largest = find_largest(&matrix[0][0], m, n);
    printf("Largest element in the matrix is %d\n", largest);

    return 0;
}