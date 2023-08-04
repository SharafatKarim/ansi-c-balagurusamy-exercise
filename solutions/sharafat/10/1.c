#include<stdio.h>

int a = 10, b = 20;

void swap (void)
{
    b = a + b ;
    a = b - a ;
    b = b - a ;
}

int main()
{
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap();
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}