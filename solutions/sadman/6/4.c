#include <stdio.h>

int main()
{
    int marks;

    while (1)
    {
        printf("Enter Student Marks (Enter -1 to exit): ");
        scanf("%d", &marks);

        if (marks == -1)
        {
            printf("Exiting the program...\n");
            break;
        }
        else if (marks > 80 && marks <= 100)
        {
            printf("The Student Got A+\n");
        }
        else if (marks > 60 && marks <= 80)
        {
            printf("The Student Got A\n");
        }
        else if (marks > 40 && marks <= 60)
        {
            printf("The Student Got B\n");
        }
        else if (marks <= 40)
        {
            printf("The Student Failed\n");
        }
        else
        {
            printf("Marks are Unrecognized\n");
        }
    }

    return 0;
}
