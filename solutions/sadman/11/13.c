#include <stdio.h>

// Define the hotel structure
struct hotel
{
    char name[50];
    char address[100];
    int grade;
    float averageRoomCharge;
    int numberOfRooms;
};

int main()
{
    struct hotel h = {
        .name = "The Ritz-Carlton",
        .address = "123 Main Street, Anytown, CA 12345",
        .grade = 5,
        .averageRoomCharge = 500.00,
        .numberOfRooms = 100,
    };

    // Display hotel details
    printf("\nHotel Details:\n");
    printf("Name: %s\n", h.name);
    printf("Address: %s\n", h.address);
    printf("Grade: %d\n", h.grade);
    printf("Average Room Charge: %.2f\n", h.averageRoomCharge);
    printf("Number of Rooms: %d\n", h.numberOfRooms);

    return 0;
}
