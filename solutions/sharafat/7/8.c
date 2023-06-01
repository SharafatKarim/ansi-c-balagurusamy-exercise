#include<stdio.h>
#include <math.h>

int main()
{
    float x, y;
    x = 0.0;

    float i, j;
    for (i=0; i<= (float)(0.91) ; i += 0.1)
    {
        if (i==0)
            printf("    X   ");
        else
            printf("    %.1f   ", i);
    }
    printf("\n");

    for (i=0; i<= 9 ; i += 1)
    {
        for (j=i; j<=i+0.91; j += 0.1)
        {
            if (j==i)
                printf("    %.1f ", j);
            else
                printf("  %.1e ", exp(-j));
        }
        printf("\n");
    }
    printf("\n");
}
