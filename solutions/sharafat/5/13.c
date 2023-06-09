#include <stdio.h>

int main() 
{
   float dollarAmount, exchangeRateEuro = 0.91, exchangeRateINR = 81.96;
   float euroAmount, INRAmount;

   printf("Enter dollar amount: ");
   scanf("%f", &dollarAmount);

   euroAmount = dollarAmount * exchangeRateEuro;
   INRAmount = dollarAmount * exchangeRateINR;

   printf("%.2f dollars is equivalent to %.2f euros and %.2f INR\n", dollarAmount, euroAmount, INRAmount);

   return 0;
}