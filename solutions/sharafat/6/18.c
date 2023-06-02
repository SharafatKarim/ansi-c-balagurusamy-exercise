#include <stdio.h>

void intro(void)
{
	printf("Name: Sharafat\n");
	printf("Id  : 2102024\n");
}

int main()
{
	float percentage;
	printf("Enter the percentage of marks: ");
	scanf("%f", &percentage);

	if (percentage >= 80.0)
	{
		printf("First Division");
	}
	else if (percentage >= 60.0)
	{
		printf("Second Division");
	}
	else
	{
		printf("Third Division");
	}
	return 0;
}
