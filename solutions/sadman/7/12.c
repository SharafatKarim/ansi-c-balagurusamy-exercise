#include <stdio.h>
#include <math.h>
int main()
{
    float cost, rate, present_value;
    int years;

    printf("Enter Original Cost: ");
    scanf("%f", &cost);

    printf("Enter Depreciation rate: ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%d", &years);

    present_value = cost * pow((1 - rate), years);

    printf("Books Present Value: %0.2f\n", present_value);

    return 0;
}