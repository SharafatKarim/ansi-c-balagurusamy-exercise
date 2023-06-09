#include <stdio.h>
#include <math.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    
    	
	condition:
    char T;
	printf("Enter condition [S/ C/ T]: ");
	scanf("%c", &T);
    
	double x;
	printf("Enter angle: ");
	scanf("%lf", &x);
	
	if (T == 'S')
		printf("sin = %lf", sin(x) );
	else if (T == 'C')
		printf("cos = %lf", cos(x) );
	else if (T == 'T')
		printf("tan = %lf", tan(x) );
	else
		goto condition;
    return 0;
}
