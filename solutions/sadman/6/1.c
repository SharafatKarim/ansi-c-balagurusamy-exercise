#include <stdio.h>

int main()
{
    printf("PART 1\n");
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("NUMBER IS EVEN\n");
    if (number % 2 != 0)
        printf("NUMBER IS ODD\n");

    printf("\nPART 2\n");
    if (number % 2 == 0)
        printf("NUMBER IS EVEN\n");
    else
        printf("NUMBER IS ODD\n");
}
