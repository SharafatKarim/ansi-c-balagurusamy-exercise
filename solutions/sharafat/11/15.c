#include <stdio.h>
#include <stdlib.h>

struct date 
{
    int day;
    int month;
    int year;
};

struct student_record
{
    char name[20];
    struct date date_of_birth;
    int total_marks;
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


void print_date(struct date *date)
{
    printf("Date: %d/%d/%d\n", date->day, date->month, date->year);
}

void input_student_record(struct student_record *record)
{
    printf("Enter the name of the student: ");
    scanf("%s", record->name);
    input_date(&record->date_of_birth);
    validate_data(&record->date_of_birth);
    printf("Enter the total marks of the student: ");
    scanf("%d", &record->total_marks);
}

void print_student_record(struct student_record *record)
{
    printf("Name: %s\n", record->name);
    print_date(&record->date_of_birth);
    printf("Total marks: %d\n", record->total_marks);
}

void sort_by_total_marks(struct student_record *record, int number)
{
    int i, j;
    struct student_record temp;
    for (i = 0; i < number; i++)
    {
        for (j = i; j < number; j++)
        {
            if (record[i].total_marks > record[j].total_marks)
            {
                temp = record[i];
                record[i] = record[j];
                record[j] = temp;
            }
        }
    }
}

int main()
{
    int num = 5;
    struct student_record record[num];
    int i;
    for (i = 0; i < num; i++)
    {
        input_student_record(&record[i]);
    }
    sort_by_total_marks(record, num);
    for (i = 0; i < num; i++)
    {
        print_student_record(&record[i]);
    }
}