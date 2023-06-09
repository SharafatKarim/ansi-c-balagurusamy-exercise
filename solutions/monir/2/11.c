#include <math.h>
#include <stdio.h>
int main()
{
    float A, S, a, b, c;
    printf("enter the value of a,b,c: \n");
    scanf("%f%f%f", &a, &b, &c);
    S = (a + b + c) / 2;
    A = sqrt(S * (S - a) * (S - b) * (S - c));
    printf("The area of the triangle is : %f\n", A);
    return 0;
}
