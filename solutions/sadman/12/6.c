#include <stdio.h>

static char *dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

char *getDayName(int n)
{
    if (n < 1 || n > 7)
    {
        return NULL;
    }

    return dayNames[n - 1];
}

int main()
{
    int n = 3;

    char *dayName = getDayName(n);

    if (dayName != NULL)
    {
        printf("The name of the day is: %s\n", dayName);
    }
    else
    {
        printf("Invalid day number.\n");
    }

    return 0;
}
