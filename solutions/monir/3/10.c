#include <stdio.h>
int main()
{
    int days, weeks, years;
    printf("Enter days : \n");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - (years * 365) - (weeks * 7);
    printf("years=%d\nweeks=%d\ndays=%d", years, weeks, days);
}
