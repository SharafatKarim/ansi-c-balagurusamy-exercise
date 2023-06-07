#include <stdio.h>
int main()
{
    float distance, time, speed;
    printf("enter the distance and time: \n");
    scanf("%f%f", &distance, &time);
    speed = distance / time;
    printf("The speed of the car is :%.2f km/h\n", speed);
    return 0;
}
