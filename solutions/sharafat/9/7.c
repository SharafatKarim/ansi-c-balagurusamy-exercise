// 7. A Maruti car dealer maintains a record of
// sales of various vehicles in the following form:
// ```
// 	Vehicle types	Month of sacles 		Price
// 	MARUTI-800		02/01				210000
// 	MARUTI-DX         07/01				265000
// 	GYPSY             04/02				315750
// 	MARUTI-VAN        08/02				240000
// ```
// Write a program to read this data into a table of strings and output the details of a particular vehicle sold during a specified period. The program should request the user to input the vehicle type and the period 
// (starting month, ending month).

#include<stdio.h>
#include<string.h>

int main()
{
    char vehicles[4][16] = {"MARUTI-800", "MARUTI-DX", "GYPSY", "MARUTI-VAN"};
    char months[12][16] = {"01/01", "02/01", "03/01", "04/01", "05/01", "06/01", "07/01", "08/01", "09/01", "10/01", "11/01", "12/01"};
    int prices[4] = {210000, 265000, 315750, 240000};

    char vehicle[16], start_month[16], end_month[16];
    printf("Enter vehicle type: ");
    scanf("%s", vehicle);
    printf("Enter starting month: ");
    scanf("%s", start_month);
    printf("Enter ending month: ");
    scanf("%s", end_month);

    int start_month_index, end_month_index;
    for (int i=0; i<12; i++)
    {
        if (strcmp(months[i], start_month) == 0)
            start_month_index = i;
        if (strcmp(months[i], end_month) == 0)
            end_month_index = i;
    }

    printf("Vehicle type\tMonth of sales\tPrice\n");
    for (int i=0; i<4; i++)
    {
        if (strcmp(vehicles[i], vehicle) == 0)
        {
            for (int j=start_month_index; j<=end_month_index; j++)
            {
                printf("%s\t\t%s\t\t%d\n", vehicles[i], months[j], prices[i]);
            }
        }
    }
}