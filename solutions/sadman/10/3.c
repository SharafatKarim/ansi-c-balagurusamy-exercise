#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

double equation(int x, int n)
{
    double result = pow(x, n) / factorial(n);

    return result;
}

int main()
{
    int i, j, x;
    double sum = 0, temp;

    printf("Enter a Number: ");
    scanf("%d", &x);

    for (i = 1, j = 1; i <= 11; i += 2, j++)
    {
        if (j % 2 != 0)
            sum += equation(x, i);
        else
            sum -= equation(x, i);
    }
    printf("Total Summation: %lf\n", sum);

    return 0;
}