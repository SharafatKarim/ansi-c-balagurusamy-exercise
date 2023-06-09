#include<stdio.h>
int main()
{
    int day, month, year;
    printf("Day = ");
    scanf("%d", &day);
    printf("Month = ");
    scanf("%d", &month);
    printf("Year = ");
    scanf("%d", &year);

    if (day >= 1 && day <= 31)
        printf("Day is correct\n");
    else
        printf("Day is incorrect\n");
    if (month >= 1 && month <= 12)
        printf("Month is correct\n");
    else
        printf("Month is incorrect\n");
    if (year >= 0)
        printf("Year is correct\n");
    else
        printf("Year is incorrect\n");
}