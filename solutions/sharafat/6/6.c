#include <stdio.h>
#include <math.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    float i = 1;
    float j;

    printf("%d\t", i);
        for (j = 0; j <= 0.9 ; j+= 0.1 )
        {
            printf("%.1f\t", j);
        }
    printf("\n");

    for (; i <= 9; i++ )
    {
        printf("%.1f\t", i);
        for (j = i; j < (float)(i+0.9) ; j += 0.1)
        {
            printf("%.1f\t", sqrt(j));
        }
    printf("\n");
    }
}