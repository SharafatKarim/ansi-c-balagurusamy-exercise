#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct date nextdate(struct date presentDate, int days)
{
    int daysInMonth;

    presentDate.day += days;
    daysInMonth = getDaysInMonth(presentDate.month, presentDate.year);

    if (presentDate.day > daysInMonth)
    {
        presentDate.day = presentDate.day % daysInMonth;
        presentDate.month++;

        if (presentDate.month > 12)
        {
            presentDate.month = 1;
            presentDate.year++;
        }
    }

    return presentDate;
}
int main()
{
    struct date presentDate, nextDate;
    int daysToAdd;

    printf("Enter the present date:\n");
    printf("Enter the day: ");
    scanf("%d", &presentDate.day);

    printf("Enter the month: ");
    scanf("%d", &presentDate.month);

    printf("Enter the year: ");
    scanf("%d", &presentDate.year);

    printf("Enter the number of days to add: ");
    scanf("%d", &daysToAdd);

    nextDate = nextdate(presentDate, daysToAdd);

    printf("The next date is: %02d-%02d-%04d\n", nextDate.day, nextDate.month, nextDate.year);

    return 0;
}
