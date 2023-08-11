#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
struct date incrementDate(struct date d)
{
    int daysInMonth = getDaysInMonth(d.month, d.year);

    if (d.day < daysInMonth)
    {
        d.day++;
    }
    else
    {
        d.day = 1;

        if (d.month < 12)
        {
            d.month++;
        }
        else
        {
            d.month = 1;
            d.year++;
        }
    }

    return d;
}

int main()
{
    struct date date;

    printf("Enter the day: ");
    scanf("%d", &date.day);

    printf("Enter the month: ");
    scanf("%d", &date.month);

    printf("Enter the year: ");
    scanf("%d", &date.year);

    struct date newDate = incrementDate(date);

    printf("The updated date is: %d-%d-%d\n", newDate.day, newDate.month, newDate.year);

    return 0;
}