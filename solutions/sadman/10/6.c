#include <stdio.h>
#include <math.h>

double roundToDecimalPlace(double number, int decimalPlaces)
{
    double multiplier = pow(10, decimalPlaces);
    double roundedNumber = round(number * multiplier) / multiplier;
    return roundedNumber;
}

int main()
{
    double number;
    int decimalPlaces = 2;
    scanf("%lf", &number);
    double roundedNumber = roundToDecimalPlace(number, decimalPlaces);

    printf("Original Number: %.3f\n", number);
    printf("Rounded Number to %d decimal place(s): %.2f\n", decimalPlaces, roundedNumber);

    return 0;
}
