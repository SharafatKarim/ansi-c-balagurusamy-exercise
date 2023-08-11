#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter one of the followings: ");
    printf("\n(a) Sum of the numbers ");
    printf("\n(b) Difference of the numbers ");
    printf("\n(c) Product of the numbers ");
    printf("\n(d) Division of the numbers ");
    printf("\n");

    scanf(" %c", &operation);
    switch (operation)
    {
        case 'a':
            printf("Result -> %d\n", sum(a, b));
            break;
        case 'b':
            printf("Result -> %d\n", difference(a, b));
            break;
        case 'c':
            printf("Result -> %d\n", product(a, b));
            break;
        case 'd':
            printf("Result -> %d\n", division(a, b));
            break;
        default:
            printf("Invalid operation\n");
    }
}