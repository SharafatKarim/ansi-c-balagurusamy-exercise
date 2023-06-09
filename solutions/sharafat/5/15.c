#include <stdio.h>
#include <math.h>

int main() {
    double investment, rate_of_interest, final_amount;
    int years = 10;

    printf("Enter the investment amount: ");
    scanf("%lf", &investment);

    rate_of_interest = 8.75 / 100.0;

    final_amount = investment * pow((1 + rate_of_interest), years);

    printf("The final amount after %d years is %.2lf", years, final_amount);

    return 0;
}
