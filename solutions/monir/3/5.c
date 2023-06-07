#include <stdio.h>
int main()
{
    typedef float MY;
    MY x = 12.0;
    MY y, z;

    printf("Enter the value of y: \n");
    scanf("%f", &y);
    z = x + y;
    printf("The sum of %.2f and %.2f is: %.2f", x, y, z); // use of typedef function
}
