#include <stdio.h>
#include <math.h>
int main()
{
    int k, l;
    double x, y;

    for (k = -1; k <= 9; k++)
    {
        for (l = 1; l <= 9; l++)
        {
            if (k == -1 && l == 1)
                printf("    X    ");
            else if (k == -1)
                printf("    0.%d   ", l);
            else if (l == 1)
                printf("    %d.0   ", k);
            else
            {
                x = k + 0.1 * l;
                y = exp(x);
                printf("%9.5lf ", y);
            }
        }
        printf("\n");
    }

    return 0;
}
