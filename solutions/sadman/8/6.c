#include <stdio.h>

int main()
{
    int i;
    int matrixA[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matrixB[9] = {11, 12, 13, 14, 15, 16, 17, 18, 19};

    int lengthA = sizeof(matrixA) / sizeof(int);
    int lengthB = sizeof(matrixB) / sizeof(int);
    int lengthC = lengthA + lengthB;
    int matrixC[lengthC];

    for (i = 0; i < lengthA; i++)
    {
        matrixC[i] = matrixA[i];
    }

    for (i = 0; i < lengthB; i++)
    {
        matrixC[i + lengthA] = matrixB[i];
    }

    for (i = 0; i < lengthC; i++)
    {
        printf("%d\t", matrixC[i]);
    }

    return 0;
}
