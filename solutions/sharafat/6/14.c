#include <stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int prime(int a)
{
	int i;
	for(i = 2; i < a; i++)
	{
		if ( a % i == 0 )
			return 0;
	}
	return 1;
}

int main()
{
    intro();
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if ( prime(n) )
		printf("It's prime");
	else
		printf("It's not prime");
    return 0;
}
