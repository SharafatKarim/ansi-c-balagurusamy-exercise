#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct date convertToDate(long int dateValue)
{
    struct date d;

    d.day = (dateValue % 100);
    dateValue /= 100;

    d.month = (dateValue % 100);
    dateValue /= 100;

    d.year = (dateValue);

    return d;
}
int main()
{
    long int inputtedDate;
    struct date convertedDate;

    printf("Enter the date as a long integer: ");
    scanf("%ld", &inputtedDate);

    convertedDate = convertToDate(inputtedDate);

    printf("The converted date is: %02d-%02d-%04d\n", convertedDate.day, convertedDate.month, convertedDate.year);

    return 0;
}
