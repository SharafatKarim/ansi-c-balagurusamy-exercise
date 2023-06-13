#include <stdio.h>
int main()
{
    float d, t, speed;
    printf("Enter the value of distance and time: \n");
    scanf("%f %f", &d, &t);
    speed = d / t;
    printf("The speed of the car is :%.2f km/h", speed);
    return 0;
}