#include<stdio.h>
int main()
{
    int one, two, three, x;
    scanf("%d %d %d", &one, &two, &three);
    if (one == two || two == three || one == three)
        printf("triangle is isoceles");
    else
        printf("triangle is not isoceles");
}