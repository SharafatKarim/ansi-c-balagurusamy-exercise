#include <stdio.h>

int isLeapYear(int year);

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

int isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            if (year % 400 == 0)
            {
                return 1; // Leap year (divisible by 400)
            }
            else
            {
                return 0; // Not a leap year (divisible by 100 but not by 400)
            }
        }
        else
        {
            return 1; // Leap year (divisible by 4 but not by 100)
        }
    }
    else
    {
        return 0; // Not a leap year (not divisible by 4)
    }
}
