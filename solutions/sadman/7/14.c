#include <stdio.h>
#include <math.h>
int main()
{

    int i = -180, counter = 0;
    while (i <= 180)
    {
        counter++;
        printf("Sin (%d)=> %llf ->Counter:%d\n", i, (double)sin(i), counter);
        i += 15;
    }
    return 0;
}