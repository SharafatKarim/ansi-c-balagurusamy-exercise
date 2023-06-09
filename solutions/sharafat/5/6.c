#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	printf("%f", x);
	printf("%f", y);
	printf("%f\n", z);

	printf("%4.2f %4.2f %4.2f \n", x, y, z);
	printf("%f %f %f \n", x, y, z);
}