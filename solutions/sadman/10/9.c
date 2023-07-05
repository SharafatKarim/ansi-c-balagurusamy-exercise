#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sum(double n1, double n2);
void sub(double n1, double n2);
void mul(double n1, double n2);
void divi(double n1, double n2);

int main()
{
    double number1, number2;
    while (1)
    {
        int choice;

        printf("Enter Two Number: ");
        scanf("%lf %lf", &number1, &number2);

        printf("Please Choose a Operation:\n\n");
        printf("1 -> SUMMATION(A + B)\n");
        printf("2 -> SUBTACTION(A - B)\n");
        printf("3 -> MULTIPICATION(A x B)\n");
        printf("4 -> SUMMATION(A %c B)\n", 246);
        printf("\n0 -> Quit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sum(number1, number2);
            break;

        case 2:
            sub(number1, number2);
            break;

        case 3:
            mul(number1, number2);
            break;

        case 4:
            divi(number1, number2);
            break;

        case 0:
            exit(0);
            break;

        default:
            printf("Wrong Input.Try Again!!\n");
            break;
        }
    }

    return 0;
}

void sum(double n1, double n2)
{
    printf("Summation of %lf and %lf = %lf", n1, n2, n1 + n2);
}

void sub(double n1, double n2)
{
    printf("Subtraction of %lf and %lf = %lf", n1, n2, n1 - n2);
}

void mul(double n1, double n2)
{
    printf("Multiplication of %lf and %lf = %lf", n1, n2, n1 * n2);
}

void divi(double n1, double n2)
{
    printf("Division of %lf and %lf = %lf", n1, n2, n1 / n2);
}
