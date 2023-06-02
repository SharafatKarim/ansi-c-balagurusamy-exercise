#include <stdio.h>
int main()
{
    int a, b, c, sum, large, small;
    float average;
    printf("ID:2102020\n");
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("The Sum of Three Values: %d\n", sum);
    average = (a + b + c) / 3.0;
    printf("The Average of Three Values: %f\n", average);
    if (a > b)
    {
        if (a > c)
            large = a;
        else
            large = c;
    }
    else
    {
        if (b > c)
            large = b;
        else
            large = c;
    }
    printf("The Largest Number: %d\n", large);
    if (a < b)
    {
        if (a < c)
            small = a;
        else
            small = c;
    }
    else
    {
        if (b < c)
            small = b;
        else
            small = c;
    }
    printf("The Smallest Number: %d\n", small);
}