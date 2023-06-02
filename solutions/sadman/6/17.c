#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else if (b > a)
    {
        printf("b is greater than a\n");
    }
    else
    {
        printf("a and b are equal\n");
    }

    return 0;
}
