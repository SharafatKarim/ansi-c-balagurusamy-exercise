#include <math.h>
#include <stdio.h>
#include <ctype.h>

int input(char name)
{
    int n;
    printf("Enter the value of %c\n", name );
    scanf("%d", &n);
    if (n >= 0)
        return n;
    else
    {
        printf("Invalid input! Please try again\n");
        printf("Value of P is -> %d", n);
        return input(name);
    }
}

int main()
{
    int n, c, d;
    c = input('c');
    d = input('d');
    n = input('n');

    int P;
    P = c * pow(( 1 - (int)(d/100) ), n);
    printf("Value of P is -> %d", P);

    return 0;
}
