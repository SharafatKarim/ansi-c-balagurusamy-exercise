#include <stdio.h>
int main()
{
    int y, x;
    printf("PART 1\n");
    printf("enter value of x:");
    scanf("%d", &x);
    if (x >= 0)
    {
        if (x = 0)
        {
            printf("y is 0");
        }
        else
        {
            printf("y is 1");
        }
    }
    else
    {
        printf("y is -1");
    }
    printf("\nPART 2\n");
    if (x > 0)
    {
        printf("value of y is 1\n");
    }
    else if (x < 0)
    {
        printf("value of y is -1\n");
    }
    else
    {
        printf("value of y is 0\n");
    }
    printf("\nPART 3\n");
    y = (x < 40) ? (4 * x + 100) : ((x > 40) ? (4.5 * x + 150) : 300);
    printf("%f\n", y);
}