#include <stdio.h>
#include <math.h>
int main()
{
    int number = 0, squa;
    double squar;
    printf("ID:2102020\n");
    printf("\tNumber\t  Square Root\t  Square\n");
    while (number <= 100)
    {
        squa = number * number;
        squar = sqrt(number);
        printf("\t%5d\t   %lf\t   %d\n", number, squar, squa);
        number += 10;
    }
}