#include<stdio.h>
#include<math.h>

int main()
{
	float x, y;
	scanf("%f %f", &x, &y);
	printf("%f %f %f \n", ((x+y)/(x-y)), (x+y)/2, (x+y)*(x-y));
}