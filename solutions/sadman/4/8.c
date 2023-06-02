#include <stdio.h>
#include <math.h>
int main()
{
  float frequency, resistance, inductance, capacitance = 0.01;
  float partone, parttwo, total;
  printf("ID:2102020\n");
  printf("Enter Circuit Inductance (L): ");
  scanf("%f", &inductance);

  printf("Enter Circuit Resistance (R): ");
  scanf("%f", &resistance);

  while (capacitance <= 0.1)
  {

    partone = 1.0 / (inductance * capacitance);
    parttwo = pow(resistance, 2) / 4 * pow(capacitance, 2);

    total = -1 * (partone - parttwo);

    frequency = sqrt(total);

    printf("Frequency: %f\t @ Capacitance: %f\n", frequency, capacitance);
    capacitance += 0.01;
  }
  return 0;
}