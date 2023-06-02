#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    for (x=0; x <= 180; x+=15)
    {
        printf("%8d %lf %lf\n", x, sin(x * 3.1416 / 180), cos(x * 3.1416 / 180));
    }
}