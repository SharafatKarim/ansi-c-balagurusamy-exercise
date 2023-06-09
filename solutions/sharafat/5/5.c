#include <stdio.h>
#include <math.h>

int main()
{
	int x, y;
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);

	printf("%24d \n", x);
	printf("               x%8d \n", y);
	printf("               ---------\n");
	printf("    %d x %d is     %6d\n", y % 10, x, (y % 10) * x);
	printf("    %d x %d is     %6d\n", y / 10, x, (y / 10) * x);
	printf("               ---------\n");
	printf("Add them        %8d\n", x * y);
	printf("               ---------\n");
}