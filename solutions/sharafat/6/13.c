#include <stdio.h>

void intro(void)
{
	printf("Name: Sharafat\n");
	printf("Id  : 2102024\n");
}

int main()
{
	intro();
	int n, sum;
	for (n = 0; n <= 100; n++)
	{
		if (n % 6 == 0 && n % 4 != 0)
		{
			printf("%d + ", n);
			sum += n;
		}
	}
	printf(" = %d ", sum);
	return 0;
}