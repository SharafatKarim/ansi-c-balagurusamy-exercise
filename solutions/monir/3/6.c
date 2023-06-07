#include <stdio.h>
#define PI 3.1416
int main()
{
    int r;
    float area;
    printf("Enter r: \n");
    scanf("%d", &r);
    area = PI * r * r;
    printf("The are of circle is : %.2f\n", area);
}
