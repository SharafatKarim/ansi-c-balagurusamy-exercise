#include <stdio.h>
#include <stdlib.h>

struct date 
{
    int day;
    int month;
    int year;
};

void input_date(struct date *date)
{
    printf("Enter date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d", &date->day, &date->month, &date->year);
}

void validate_data(struct date *date)
{
    if (date->year < 1)
    {
        printf("Invalid year\n");
        exit(1);
    }
    if (date->month < 1 || date->month > 12)
    {
        printf("Invalid month\n");
        exit(1);
    }
    if ((date->day < 1 || date->day > 31) || (date-> day > 30 && (date->month == 4 || date->month == 6 || date->month == 9 || date->month == 11)) || (date->day > 28 && date->month == 2) || (date->day > 29 && date->month == 2 && (date->year % 4 != 0 || (date->year % 100 == 0 && date->year % 400 != 0))))
    {
        printf("Invalid day\n");
        exit(1);
    }
}

int validate_data_and_return(struct date date)
{
    if (date.year < 1)
    {
        // printf("Invalid year\n");
        return(1);
    }
    if (date.month < 1 || date.month > 12)
    {
        // printf("Invalid month\n");
        return(1);
    }
    if ((date.day < 1 || date.day > 31) || (date. day > 30 && (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11)) || (date.day > 28 && date.month == 2) || (date.day > 29 && date.month == 2 && (date.year % 4 != 0 || (date.year % 100 == 0 && date.year % 400 != 0))))
    {
        // printf("Invalid day\n");
        return(1);
    }
    return(0);
}

void update(struct date *date)
{
    struct date temp_date = *date;
    temp_date.day++;
    if (validate_data_and_return(temp_date))
    {
        temp_date.day = 1;
        temp_date.month++;
        if (validate_data_and_return(temp_date))
        {
            temp_date.month = 1;
            temp_date.year++;
            if (validate_data_and_return(temp_date))
            {
                printf("Invalid date\n");
                exit(1);
            }
        }    
    }
    *date = temp_date;
}

void nextdate(struct date *date)
{
    int days_to_add = 1;
    printf("Enter number of days to add: ");
    scanf("%d", &days_to_add);
    for (int i = 0; i < days_to_add; i++)
    {
        update(date);
    }
}

void print_date(struct date *date)
{
    printf("Date: %d/%d/%d\n", date->day, date->month, date->year);
}

int main()
{
    struct date date;
    input_date(&date);
    validate_data(&date);
    print_date(&date);

    nextdate(&date);
    printf("Date after incrementing day: \n");
    print_date(&date);
    return 0;
}