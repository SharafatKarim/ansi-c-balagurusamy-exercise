#include <math.h>
#include <stdio.h>
int main()
{
    int x1, x2, y1, y2;
    float area, diameter, r;
    x1 = 2;
    y1 = 2;
    x2 = 5;
    y2 = 6;
    diameter = (float)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    r = diameter / 2;
    area = 2 * 3.1416 * r;
    printf("The area of circle is : %.2f", area);
    return 0;
}
