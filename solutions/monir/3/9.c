#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of x between 0 to 128:  \n");
    scanf("%d", &x);
    printf("The ASCII character of %d is %c", x, x);
}
