#include <stdio.h>

int main()
{
    double sum = 1.0;
    int limit, i, factor = 1;

    printf("Enter Nth Limit of Euler's Number: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        factor *= i;
        sum += 1.0 / factor;
    }

    printf("Sum of Euler's Number: %.15lf\n", sum);
    return 0;
}
