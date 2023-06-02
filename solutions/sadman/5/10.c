#include <stdio.h>

int main()
{
  int fan_code, motor_code;
  float fan_price, motor_price;

  printf("Enter Code and price of Fan: ");
    scanf("%d %f",&fan_code, &fan_price);

  printf("Enter Code and price of Motor: ");
    scanf("%d %f",&motor_code, &motor_price);

  printf("\nName\t\t\tCode\t\t\tPrice\n");
  printf("Fan\t\t\t%10d\t\t\t%8.2f\n",fan_code,fan_price);
  printf("Motor\t\t\t%10d\t\t\t%8.2f\n",motor_code,motor_price);


    return 0;
}