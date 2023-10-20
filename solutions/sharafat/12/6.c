#include <stdio.h>

static char *dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void return_day_name(int n, char *day_name)
{
    if (n < 1 || n > 7)
    {
        day_name = NULL;
    }
    else
    {
        day_name = dayNames[n - 1];
    }
}

int main()
{
    int n = 3;
    char *day_name;

    return_day_name(n, day_name);

    if (day_name != NULL)
    {
        printf("The name of the day is: %s\n", day_name);
    }
    else
    {
        printf("Invalid day number.\n");
    }

    return 0;
}