#include <stdio.h>

char *month_name(int m)
{
    char *months[] = {
        "January", "February", "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December"};

    return months[m - 1];
}

int main()
{
    int m;

    printf("Enter month number: ");
    scanf("%d", &m);

    printf("Month name: %s\n", month_name(m));

    return 0;
}