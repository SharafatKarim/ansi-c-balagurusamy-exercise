#include <stdio.h>

void intro(void)
{
	printf("Name: Sharafat\n");
	printf("Id  : 2102024\n");
}

int main()
{
	intro();
	int num1, sum;
	char name[32];

	printf("Enter the bll: ");
	scanf("%d", &num1);
	printf("Enter your name: ");
	scanf("%s", name);

	sum = 100;
	if (num1 > 400)
		sum += (num1 * 15 / 100);

	if (num1 <= 200)
	{
		sum += (num1 * 80);
	}
	else
	{
		sum += (80 * 200);
		num1 -= 200;
		if (num1 <= 100)
		{
			sum += (num1 * 90);
		}
		else
		{
			sum += (900 * 200);
			num1 -= 100;
			sum += (num1 * 1);
		}
	}
	printf("Dear %s\n", name);
	printf("Your bill = %d", sum);
	return 0;
}