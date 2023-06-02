#include <stdio.h>
#include <math.h>

int main()
{
  float a,x;
  int b,c;
  printf("enter a fraction number:");
  scanf("%f",&a);

b=ceil(a);
c=floor(a);
printf("latgest number:%d\n",b);
printf("smallest number:%d",c);
}