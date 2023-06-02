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
    int p, q, r;
    printf("\nInput the first number: ");
    scanf("%d", &p);
    printf("\nInput the second number: ");
    scanf("%d", &q);
    printf("\nInput the third number: ");
    scanf("%d", &r);
    if (((q*q)-(4*p*r)) >= 0)
    {
        printf("Root1: %f\n", (( -q + sqrt( ((q*q)-(4*p*r)) )) / (2 * p)) );
        printf("Root1: %f\n", (( -q - sqrt( ((q*q)-(4*p*r)) )) / (2 * p)) );
    }
    else
    {
        printf("Root not possible!");
    }
    return 0;
}
