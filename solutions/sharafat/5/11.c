#include <stdio.h>
int main()
{
	printf("Inventory Stock Report\n");
	printf("----------------------\n");
	printf("Item Code | Quantity | Location\n");
	printf("--------------------------------\n");
	printf("%9d | %8d | %8s\n", 37837, 2, "Dhaka" );
	printf("%9d | %8d | %8s\n", 14567, 1, "Khulna" );
		printf("%9d | %8d | %8s\n", 975737, 8, "Chandpur" );
	return 0;
}