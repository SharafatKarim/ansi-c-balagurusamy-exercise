#include <stdio.h>

int main()
{
    float dollars, euro, inr;
    const float DOLLAR_TO_EURO_RATE = 0.85;
    const float DOLLAR_TO_INR_RATE = 75.10;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    euro = dollars * DOLLAR_TO_EURO_RATE;
    inr = dollars * DOLLAR_TO_INR_RATE;

    printf("Amount in Euro: %.2f\n", euro);
    printf("Amount in INR: %.2f\n", inr);

    return 0;
}
