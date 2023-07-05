#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int compareDates(struct date date1, struct date date2)
{
    int yearDiff = date1.year - date2.year;
    int monthDiff = date1.month - date2.month;
    int dayDiff = date1.day - date2.day;

    if (yearDiff < 0)
        return 1;
    else if (yearDiff > 0)
        return 0;
    else
    {
        if (monthDiff < 0)
            return 1;
        else if (monthDiff > 0)
            return 0;
        else
        {
            if (dayDiff < 0)
                return 1;
            else if (dayDiff > 0)
                return 0;
            else
                return -1; // Dates gulo same hobe
        }
    }
}

int main()
{
    struct date date1, date2;
    int result;

    printf("Enter the first date:\n");
    printf("Enter the day: ");
    scanf("%d", &date1.day);

    printf("Enter the month: ");
    scanf("%d", &date1.month);

    printf("Enter the year: ");
    scanf("%d", &date1.year);
    printf("\nEnter the second date:\n");
    printf("Enter the day: ");
    scanf("%d", &date2.day);

    printf("Enter the month: ");
    scanf("%d", &date2.month);

    printf("Enter the year: ");
    scanf("%d", &date2.year);
    result = compareDates(date1, date2);

    if (result == 1)
        printf("\nDate 1 is earlier than Date 2\n");
    else if (result == 0)
        printf("\nDate 1 is later than Date 2\n");
    else
        printf("\nDate 1 is the same as Date 2\n");

    return 0;
}
