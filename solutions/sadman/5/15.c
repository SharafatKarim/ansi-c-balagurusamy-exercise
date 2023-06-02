#include <stdio.h>
#include <math.h>

int main()
{
    float investment, rate, interest, amount;
    int years = 10;

    printf("Enter the investment amount: ");
    scanf("%f", &investment);

    rate = 8.75 / 100; 
    interest = investment * pow(1 + rate, years) - investment;
    amount = investment + interest;

    printf("Investment amount: %.2f\n", investment);
    printf("Cumulative interest earned: %.2f\n", interest);
    printf("Total amount after %d years: %.2f\n", years, amount);

    return 0;
}
