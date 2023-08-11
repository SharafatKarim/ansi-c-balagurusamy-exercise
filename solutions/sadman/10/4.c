 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int polynomialSeries(int arr[], int currentPos, int x, int size)
{
    if (currentPos == 0)
        return arr[currentPos] * pow(x, currentPos);
    else if (currentPos < size && currentPos > 0)
        return pow(x, currentPos) * arr[currentPos] + polynomialSeries(arr, currentPos - 1, x, size);
    else
        return arr[currentPos] + polynomialSeries(arr, currentPos - 1, x, size);
}

int main()
{
    int i, size, x;

    printf("Enter Value of X: ");
    scanf("%d", &x);

    printf("Enter Size of Coefficients: ");
    scanf("%d", &size);

    int arr[size + 1];

    for (i = 0; i <= size; i++)
    {
        printf("Enter value of a%d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("%d Order Polynomial = %lld\n", size, polynomialSeries(arr, size, x, size));

    return 0;
}
