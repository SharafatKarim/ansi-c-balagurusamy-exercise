#include<stdio.h>
int main()
{
    float initial_velocity, accelaration, time, distance;
    printf("Initial velocity = ");
    scanf("%f", &initial_velocity);
    printf("Accelaration = ");
    scanf("%f", &accelaration);
    printf("Time = ");
    scanf("%f", &time);

    distance = initial_velocity * time + ( (accelaration * time * time) / 2 );
    printf("Distance = %f", distance);
}