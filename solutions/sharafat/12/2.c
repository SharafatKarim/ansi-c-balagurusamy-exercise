#include <stdio.h>
#include <math.h>

void calculate_roots(float a, float b, float c, float *x1, float *x2)
{
    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        *x1 = *x2 = 0;
    }
    else if (discriminant == 0)
    {
        *x1 = *x2 = -b / (2 * a);
    }
    else
    {
        *x1 = (-b + sqrt(discriminant)) / (2 * a);
        *x2 = (-b - sqrt(discriminant)) / (2 * a);
    }
}

int main()
{
    float a, b, c, x1, x2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    calculate_roots(a, b, c, &x1, &x2);
    printf("x1 = %f, x2 = %f\n", x1, x2);
}