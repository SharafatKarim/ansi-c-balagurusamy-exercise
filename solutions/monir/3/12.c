#include <stdio.h>
int main()
{
    int amt, total;
    printf("Input the amount: ");
    scanf("%d", &amt);

    total = (int)amt / 100;

    printf("There are: ");

    printf("\n%d Note(s) of 100.00\n", total);

    amt = amt - (total * 100);

    total = (int)amt / 50;

    printf("%d Note(s) of 50.00\n", total);

    amt = amt - (total * 50);

    total = (int)amt / 20;

    printf("%d Note(s) of 20.00\n", total);

    amt = amt - (total * 20);

    total = (int)amt / 10;

    printf("%d Note(s) of 10.00\n", total);

    amt = amt - (total * 10);

    total = (int)amt / 5;

    printf("%d Note(s) of 5.00\n", total);

    amt = amt - (total * 5);

    total = (int)amt / 2;

    printf("%d Note(s) of 2.00\n", total);

    amt = amt - (total * 2);

    total = (int)amt / 1;

    printf("%d Note(s) of 1.00\n", total);

    return 0;
}
