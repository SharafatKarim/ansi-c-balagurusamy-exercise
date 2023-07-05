#include <stdio.h>

char *get_month_name(int month_number)
{
    static char *month_names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    if (month_number < 1 || month_number > 12)
    {
        return NULL;
    }

    return month_names[month_number - 1];
}

int main()
{
    int month_number;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    char *month_name = get_month_name(month_number);

    if (month_name != NULL)
    {
        printf("The corresponding month is %s.\n", month_name);
    }
    else
    {
        printf("Invalid month number!\n");
    }

    return 0;
}
