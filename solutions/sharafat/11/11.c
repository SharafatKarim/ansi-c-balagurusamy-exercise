#include <stdio.h>

struct metric
{
    float meters;
    float centimeters;
};

struct British
{
    float feet;
    float inches;
};

int main()
{
    struct metric m;
    struct British b;

    printf("Enter the metric distance (meter): ");
    scanf("%f", &m.meters);
    printf("Enter the metric distance (centimeter): ");
    scanf("%f", &m.centimeters);

    b.feet = 3.28084 * m.meters;
    b.inches = 0.3937008 * m.centimeters;

    printf("How do you wish to display the result?\n");
    printf("1. Feet and inches\n");
    printf("2. Meters and centimeters\n");

    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Result: %f feet %f inches\n", b.feet, b.inches);
            break;
        case 2:
            printf("Result: %f meters %f centimeters\n", m.meters, m.centimeters);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;    
}