#include <stdio.h>
#include <math.h>
#define rad 0.0174533

int main()
{
    int degree = 0;
    double sinx, cosx;
printf("ID:2102020\n");
    printf("\tX(degree)\t  Sin(x)\t  Cos(x)\n");
    while (degree <= 180)
    {
        sinx = sin(degree * rad);
        cosx = cos(degree * rad);
        printf("\t%5d\t\t%lf\t%lf\n", degree, sinx, cosx);
        degree += 15;
    }
    return 0;
}