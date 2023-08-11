#include <stdio.h>
#include <math.h>

float perimeter(float a, float b, float c)
{
    return a + b + c;
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt((s - a) * (s - b) * (s - c));
}

int main()
{
    float a, b, c;
    char operation;

    printf("Enter first side: ");
    scanf("%f", &a);
    printf("Enter second side: ");
    scanf("%f", &b);
    printf("Enter third side: ");
    scanf("%f", &c);

    printf("Enter one of the followings: ");
    printf("\n(a) Perimeter of the triangle ");
    printf("\n(b) Area of the triangle ");
    printf("\n");

    scanf(" %c", &operation);
    switch (operation)
    {
        case 'a':
            printf("Result -> %f\n", perimeter(a, b, c));
            break;
        case 'b':
            printf("Result -> %f\n", area(a, b, c));
            break;
        default:
            printf("Invalid operation\n");
    }
}
