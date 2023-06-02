#include <stdio.h>
#include <math.h>
int main()
{
  float init_velocity, acceleration, time, distance;
  printf("ID:2102020\n");
    printf("Enter Initial Velocity (u): ");
      scanf("%f",&init_velocity);
    printf("Enter Acceleration (a): ");
      scanf("%f",&acceleration);
    printf("Enter Total Time (t): ");
      scanf("%f",&time);
      distance = (init_velocity * time) + ((acceleration * pow(time,2))/2);
    printf("Total Distance Travelled: %0.3f Meters\n", distance);
}