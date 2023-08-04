#include <stdio.h>
#include <math.h>

double round2(double x)
{
    return round(x * 100) / 100;
}

int main()
{
    double x;

    printf("Enter a floating point value: ");
    scanf("%lf", &x);

    printf("Rounded value: %.2lf\n", round2(x));

    return 0;
}
