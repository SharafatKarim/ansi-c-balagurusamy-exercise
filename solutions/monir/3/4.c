#include <stdio.h>
int main()
{
    int x, y;
    short int z;
    printf("Enter the value of x and y in 6 digits: \n");
    scanf("%d%d", &x, &y);
    z = x + y;
    printf("x=%d\ny=%d\nz=%hd", x, y, z); /* the ranger of short int=-32768 to 32767*/
}
