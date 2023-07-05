#include <stdio.h>

float roundToTwoDecimalPlaces(float x)
{
    int decimalPlaces = 2;
    float multiplier = pow(10, decimalPlaces);
    return round(x * multiplier) / multiplier;
}

int main()
{
    float value;

    printf("Enter a floating-point value: ");
    scanf("%f", &value);

    float roundedValue = roundToTwoDecimalPlaces(value);

    printf("Rounded value: %.2f\n", roundedValue);

    return 0;
}
