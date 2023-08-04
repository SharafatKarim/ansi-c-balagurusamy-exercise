#include <stdio.h>

void rounded(float num, int round)
{
    printf("%.*f\n", round, num);
}

int main()
{
    float num;
    int round;

    printf("Enter number to round: ");
    scanf("%f", &num);
    printf("Enter number of decimal places to round to: ");
    scanf("%d", &round);

    rounded(num, round);
}