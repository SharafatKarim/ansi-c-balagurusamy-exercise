#include <stdio.h>
#include <math.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int calc(int a, int b, int c)
{
	if ( a*a == b*b + c*c )
		return 1;
	else
		return 0;
}

int main()
{
    intro();
    int p, q, r;
    printf("\nInput the first number: ");
    scanf("%d", &p);
    printf("\nInput the second number: ");
    scanf("%d", &q);
    printf("\nInput the third number: ");
    scanf("%d", &r);
	
	if ( calc(p, q, r) || calc(q, p, r) || calc(r, p, q) )
		printf("It is right angeled");
	else
		printf("It is not right angeled");
    return 0;
}
