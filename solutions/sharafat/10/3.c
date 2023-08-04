#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

float evaluate(int x, int n, int i)
{
    if (n >= 10)
        return 0;
    else if (i % 2 == 0)
        return -pow(x, n) / factorial(n) + evaluate(x, n + 2, i+1);
    else
        return pow(x, n) / factorial(n) + evaluate(x, n + 2, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%f\n", evaluate(n, 1, 1));
}