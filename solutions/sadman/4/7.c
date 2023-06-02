#include <stdio.h>
#include <math.h>
int main()
{
  float demand_rate, setup_cost, hcput, EOQ, TBO;
  printf("ID:2102020\n");
    printf("Enter Demand Rate: ");
      scanf("%f", &demand_rate);
    printf("Enter Setup Cost: ");
      scanf("%f", &setup_cost);
    printf("Enter Holding Cost Per Unit Time: ");
      scanf("%f", &hcput);
    EOQ = sqrt((2 * demand_rate * setup_cost)/hcput);
    printf("Economic Order Quantity : %0.2f\n", EOQ);

    TBO = sqrt((2 * setup_cost)/(hcput * demand_rate));
    
    printf("Time Between Orders : %0.2f\n", TBO);
}