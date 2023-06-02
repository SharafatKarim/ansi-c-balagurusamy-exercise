#include <stdio.h>
#include <string.h>

int main()
{
    char month[20];

    printf("Enter the name of the month: ");
    scanf("%s", month);

    // Convert the entered month name to lowercase
    for (int i = 0; i < strlen(month); i++)
    {
        month[i] = tolower(month[i]);
    }

    int days;

    // Check the month name and assign the number of days
    switch (month[0])
    {
    case 'j':
        if (strcmp(month, "january") == 0)
            days = 31;
        else if (strcmp(month, "june") == 0)
            days = 30;
        else if (strcmp(month, "july") == 0)
            days = 31;
        else
            days = -1; // Invalid month
        break;
    case 'f':
        if (strcmp(month, "february") == 0)
            days = 28;
        else
            days = -1; // Invalid month
        break;
    case 'm':
        if (strcmp(month, "march") == 0)
            days = 31;
        else if (strcmp(month, "may") == 0)
            days = 31;
        else
            days = -1; // Invalid month
        break;
    case 'a':
        if (strcmp(month, "april") == 0)
            days = 30;
        else if (strcmp(month, "august") == 0)
            days = 31;
        else
            days = -1; // Invalid month
        break;
    case 's':
        if (strcmp(month, "september") == 0)
            days = 30;
        else
            days = -1;
        break;
    case 'o':
        if (strcmp(month, "october") == 0)
            days = 31;
        else
            days = -1;
        break;
    case 'n':
        if (strcmp(month, "november") == 0)
            days = 30;
        else
            days = -1;
        break;
    case 'd':
        if (strcmp(month, "december") == 0)
            days = 31;
        else
            days = -1;
        break;
    default:
        days = -1;
        break;
    }

    if (days != -1)
    {
        printf("Number of days in %s: %d\n", month, days);
    }
    else
    {
        printf("Invalid month\n");
    }

    return 0;
}
