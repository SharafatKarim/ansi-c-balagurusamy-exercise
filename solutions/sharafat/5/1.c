#include <stdio.h>
#include <string.h>

int main()
{
	char s[16];
	scanf("%s", s);

	int i;
	for (i = 0; i < strlen(s); i++)
	{
		if (i == 4)
			printf(" ");
		putchar(s[i]);
	}
	printf("\n");

	for (i = 0; i < strlen(s); i++)
	{
		if (i == 4)
			printf("\n");
		putchar(s[i]);
	}
	printf("\n");

	for (i = 0; i < strlen(s); i++)
	{
		if (i == 0 || i == 4)
			printf("%c.", s[i]);
	}
}