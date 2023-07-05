#include <stdio.h>

struct metric
{
    int meters;
    int centimeters;
};

struct British
{
    int feet;
    int inches;
};

void addDistances(struct metric m, struct British b)
{

    int totalCentimeters = (b.feet * 12 + b.inches) * 2.54;
    int metersToAdd = totalCentimeters / 100;
    int centimetersToAdd = totalCentimeters % 100;
    m.meters += metersToAdd;
    m.centimeters += centimetersToAdd;
    if (m.centimeters >= 100)
    {
        m.meters++;
        m.centimeters -= 100;
    }
    printf("Result: %d meters %d centimeters\n", m.meters, m.centimeters);
}

int main()
{
    struct metric m1, m2;
    struct British b1, b2;

    printf("Enter the first metric distance (meters centimeters): ");
    scanf("%d %d", &m1.meters, &m1.centimeters);

    printf("Enter the second metric distance (meters centimeters): ");
    scanf("%d %d", &m2.meters, &m2.centimeters);

    printf("Enter the first British distance (feet inches): ");
    scanf("%d %d", &b1.feet, &b1.inches);

    printf("Enter the second British distance (feet inches): ");
    scanf("%d %d", &b2.feet, &b2.inches);

    addDistances(m1, b1);
    addDistances(m2, b2);

    return 0;
}
