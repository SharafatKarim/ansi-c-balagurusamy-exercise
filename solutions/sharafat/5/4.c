#include<stdio.h>
#include<math.h>

int main()
{
	float n;
	int i;
	scanf("%f", &n);
	
	for (i=0; i < round(n); i++)
		printf("*    ");
	printf("\n");
		
	for (i=0; i < round(n); i++)
		printf("*    ");
	printf("    %2f\n", n);
	
	for (i=0; i < round(n); i++)
		printf("*    ");
	printf("\n");
}