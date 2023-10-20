#include <stdio.h>

struct hotel
{
    char name[20];
    int address;
    int grade;
    int average_room_charge;
    int number_of_rooms;
};

void input_hotel(struct hotel *h, int number)
{
    int i;
    for (i = 0; i < number; i++)
    {
        printf("Enter the name of the hotel: ");
        scanf("%s", h[i].name);
        printf("Enter the address of the hotel: ");
        scanf("%d", &h[i].address);
        printf("Enter the grade of the hotel: ");
        scanf("%d", &h[i].grade);
        printf("Enter the average room charge of the hotel: ");
        scanf("%d", &h[i].average_room_charge);
        printf("Enter the number of rooms in the hotel: ");
        scanf("%d", &h[i].number_of_rooms);
        printf("\n");
    }
}

void sort_by_average_room_charge(struct hotel *h, int number)
{
    int i, j;
    struct hotel temp;
    for (i = 0; i < number; i++)
    {
        for (j = i; j < number; j++)
        {
            if (h[i].average_room_charge > h[j].average_room_charge)
            {
                temp = h[i];
                h[i] = h[j];
                h[j] = temp;
            }
        }
    }
}

void print_specific_grade(struct hotel *h, int number)
{
    int grade;
    printf("Enter the grade: ");
    scanf("%d", &grade);
    int i;
    for (i = 0; i < number; i++)
    {
        if (h[i].grade == grade)
        {
            printf("\tName: %s\n", h[i].name);
            printf("\tAddress: %d\n", h[i].address);
            printf("\tGrade: %d\n", h[i].grade);
            printf("\tAverage room charge: %d\n", h[i].average_room_charge);
            printf("\tNumber of rooms: %d\n", h[i].number_of_rooms);
            printf("\n");
        }
    }
}

void print_charge_less_than(struct hotel *h, int number)
{
    int charge;
    printf("Enter the max charge: ");
    scanf("%d", &charge);
    int i;
    for (i = 0; i < number; i++)
    {
        if (h[i].average_room_charge < charge)
        {
            printf("\tName: %s\n", h[i].name);
            printf("\tAddress: %d\n", h[i].address);
            printf("\tGrade: %d\n", h[i].grade);
            printf("\tAverage room charge: %d\n", h[i].average_room_charge);
            printf("\tNumber of rooms: %d\n", h[i].number_of_rooms);
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of hotels: ");
    scanf("%d", &n);
    struct hotel h[n];
    input_hotel(h, n);

    sort_by_average_room_charge(h, n);
    print_specific_grade(h, n);

    print_charge_less_than(h, n);
}