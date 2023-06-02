#include <stdio.h>
#include <string.h>
#include <ctype.h>

void intro(void)
{
	printf("Name: Sharafat\n");
	printf("Id  : 2102024\n");
}

int main()
{
	intro();
	char str;
	int cap = 0, small = 0;
	printf("Enter the string: ");
	while (( str = getchar() )!= '\n' )
	{
		if ( str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' )
			cap++;
		else
			small++;
	}
	
	printf("%d - capital\n", cap);
	printf("%d - small\n", small);
	return 0;
}
