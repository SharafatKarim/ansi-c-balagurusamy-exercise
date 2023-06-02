#include<stdio.h>
#include<math.h>

int main()
{
    float num;
    scanf("%f", &num);

    printf("Smallest integer = %d\n", (int)floor(num));
    printf("Largest integer = %d\n", (int)ceil(num));
    printf("Given number = %f\n", num);
}