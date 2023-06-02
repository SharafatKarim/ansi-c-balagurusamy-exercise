#include <stdio.h>

int main()
{
    int side1, side2, side3, count = 0;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2)
    {
        count++;
    }
    if (side2 == side3)
    {
        count++;
    }
    if (side3 == side1)
    {
        count++;
    }
    if (count == 1)
    {
        printf("The triangle is isosceles.");
    }
    else
    {
        printf("The triangle is not isosceles.");
    }
}
