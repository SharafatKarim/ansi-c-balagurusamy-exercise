#include <stdio.h>

int main()
{
    int i, n;
    double m, c;
    long long sum_xi = 0, sum_yi = 0, sum_xiyi = 0, sum_xi2 = 0, squ_x2i;

    printf("Enter the number of coordinates: ");
    scanf("%d", &n);

    int axis_x[n], axis_y[n];

    printf("Enter X Coordinates: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &axis_x[i]);
    }

    printf("Enter Y Coordinates: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &axis_y[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum_xi2 += (axis_x[i] * axis_x[i]);
        sum_xi += axis_x[i];
        sum_yi += axis_y[i];
        sum_xiyi += (axis_x[i] * axis_y[i]);
    }

    squ_x2i = sum_xi * sum_xi;

    m = ((n * sum_xiyi) - (sum_xi * sum_yi)) / ((n * sum_xi2) - squ_x2i);

    c = (1.0 / n) * (sum_yi - m * sum_xi);

    printf("The Straight Line Equation: Y = %0.3lfX", m);
    if (c >= 0)
    {
        printf("+%0.3lf\n", c);
    }
    else
    {
        printf("%0.3lf\n", c);
    }

    return 0;
}
