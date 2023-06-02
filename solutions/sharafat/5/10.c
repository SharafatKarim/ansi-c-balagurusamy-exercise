#include <stdio.h>

int main()
{
	char name1[10], name2[10];
	int code1, code2;
	float price1, price2;

	printf("Enter name, code and price for first person\n");
	scanf("%s %d %f", name1, &code1, &price1);
	scanf("%s %d %f", name2, &code2, &price2);

	printf("%-10s %-8s %10s\n", "NAME", "CODE", "PRICE");
	printf("%-10s %-8d %10.2f\n", name1, code1, price1);
	printf("%-10s %-8d %10.2f\n", name2, code2, price2);

	return 0;
}