#include <stdio.h>
#include <math.h>

void calculateRoots(double *a, double *b, double *c, double *roots)
{
    int I;
    double discriminant = (*b) * (*b) - 4 * (*a) * (*c);

    if (discriminant > 0)
    {
        // Real and distinct roots
        roots[0] = (-(*b) + sqrt(discriminant)) / (2 * (*a));
        roots[1] = (-(*b) - sqrt(discriminant)) / (2 * (*a));
    }
    else if (discriminant == 0)
    {
        // Real and equal roots
        roots[0] = -(*b) / (2 * (*a));
        roots[1] = roots[0];
    }
    else
    {
        // Complex roots
        double realPart = -(*b) / (2 * (*a));
        double imaginaryPart = sqrt(-discriminant) / (2 * (*a));
        roots[0] = realPart + imaginaryPart * I;
        roots[1] = realPart - imaginaryPart * I;
    }
}

int main()
{
    double a, b, c, roots[2];

    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    calculateRoots(&a, &b, &c, roots);

    printf("Roots: %.2lf and %.2lf\n", roots[0], roots[1]);

    return 0;
}
