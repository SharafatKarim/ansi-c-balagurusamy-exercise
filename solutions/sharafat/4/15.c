#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    for (x=0; x <= 100; x+=10)
    {
        printf("%8d %lf %d\n", x, sqrt(x), (x*x));
    }
}