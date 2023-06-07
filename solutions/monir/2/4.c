#include <stdio.h>
int main()
{
    int a, b, c;
    float x;
    printf("enter the value of a,b,c: \n");
    scanf("%d%d%d", &a, &b, &c);
    x = (float)a / (float)(b - c);
    printf("The value of x is: %.2f", x);
    return 0;
}
