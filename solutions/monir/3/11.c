#include <stdio.h>
int main()
{
    float distance, fuel, mileage;
    printf("Enter The distance(in km): \n");
    scanf("%f", &distance);
    printf("Enter the fuel(in liters): \n");
    scanf("%f", &fuel);
    mileage = distance / fuel;
    printf("The mileage of the car is: %.2f km/l", mileage);
}
