#include <stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is greater than %dn", a, b);
    } else if (b > a) {
        printf("%d is greater than %dn", b, a);
    } else {
        printf("%d and %d are equaln", a, b);
    }

    return 0;
}
