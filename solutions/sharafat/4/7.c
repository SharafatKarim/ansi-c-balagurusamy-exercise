#include<stdio.h>
#include<math.h>

int main()

{
    float demand_rate, setup_costs, holding_cost, EOQ, TBO;
    printf("Demand rate = ");
    scanf("%f", &demand_rate);
    printf("Setup costs = ");
    scanf("%f", &setup_costs);
    printf("Holding cost = ");
    scanf("%f", &holding_cost);

    EOQ = sqrt((2*demand_rate*setup_costs)/(holding_cost));
    TBO = sqrt((2*setup_costs)/(demand_rate*holding_cost));
    printf("EOQ = %f\n", EOF);
    printf("TBO = %f\n", TBO);
}