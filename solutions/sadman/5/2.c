#include <stdio.h>
int main()
{
   
    float z, w, a,x,y;
    printf("enter values:");
    scanf("%f %f", &x, &y);
    z = (x + y) / (x - y);
    w = ((x + y) / 2);
    a = (x + y) * (x - y);
    printf("%.3f\n",z);
    printf("%.3f\n",w);
    printf("%.3f\n",a);
}