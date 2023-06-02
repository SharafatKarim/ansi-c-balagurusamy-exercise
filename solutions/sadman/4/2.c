#include <stdio.h>
int main()
{
    double num;
    int integral, last_two_digits;
    printf("Enter a number: ");
    scanf("%lf", &num);
    integral = num;              
    last_two_digits = integral % 100;
    printf("The two rightmost digits of the integral part of %.2lf are %d\n", num, last_two_digits);
}
