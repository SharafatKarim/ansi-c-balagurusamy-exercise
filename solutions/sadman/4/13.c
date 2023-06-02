#include <stdio.h>
int main()
{
  int customer1, customer2;
  float service_cost = 250;
  float customer1_bill, customer2_bill;
printf("ID:2102020\n");
  printf("Enter Customer 1 Total Call log Number:  ");
  scanf("%d", &customer1);
  printf("Enter Customer 2 Total Call log Number:  ");
  scanf("%d", &customer2);
  if (customer1 <= 100)
    customer1_bill = service_cost;
  else
    customer1_bill = service_cost + (customer1 * 1.25);

  if (customer2 <= 100)
    customer2_bill = service_cost;
  else
    customer2_bill = service_cost + (customer2 * 1.25);
  printf("Total Mobile Service Bill of Customer 1 : %0.2f\n", customer1_bill);
  printf("Total Mobile Service Bill of Customer 2 : %0.2f\n", customer2_bill);
}