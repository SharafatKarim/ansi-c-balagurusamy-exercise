#include <stdio.h>
int main()
{
    float rice, sugar;
    printf("enter the value of rice and sugar: \n");
    scanf("%f%f", &rice, &sugar);
    printf("\n\n\n*****LIST OF ITEMS****\n");
    printf("\tItem\tPrice\n");
    printf("\tRice\tRs %.2f\n", rice);
    printf("\tSugar\tRs %.2f", sugar);
}
