#include <stdio.h>

int main()
{
	double value = 10.45678;

	printf("Correct to two decimal places: %.2f\n", value);
	printf("Correct to four decimal places: %.4f\n", value);
	printf("Correct to eight decimal places: %.8f\n", value);

	return 0;
}