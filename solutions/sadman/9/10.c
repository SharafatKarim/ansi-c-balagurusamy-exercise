#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char roll[100][50];
    char name[100][10];
    char marks[100][10];

    int counter = 0, i, j, k, choice, del;

    while (1)
    {
        printf("\t\tStudent Marks Record List\n");
        printf("\t\t-------------------\n");

        printf("\t1 -> ADD Record.\n");
        printf("\t2 -> VIEW Student Record.\n");
        printf("\t0 -> Quit.\n");

        printf("\n\t------------------------\n");

        printf("\tEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
        {
            exit(0);
        }

        case 1:
        {
            getchar();

            printf("Enter Student Information\n");

            printf("Enter Roll: ");
            gets(roll[counter]);

            printf("Enter Name: ");
            gets(name[counter]);

            printf("Enter Marks: ");
            gets(marks[counter]);

            printf("\n\n Thank You!!! New Record Added.\n\n");
            counter++;

            break;
        }

        case 2:
        {
            printf("\t\t\t\t All Student Records Table\n");
            printf("\t\t------------------------------------------------------\n");
            printf("\t\t|SI |\t\tRoll    |    Student Name    |    Marks    |\n");
            printf("\t\t------------------------------------------------------\n");
            for (i = 0; i < counter; i++)
            {
                printf("\t\t|%2d |%15s \t| %15s\t| %5s\t|\n", i + 1, roll[i], name[i], marks[i]);
                printf("\t\t------------------------------------------------------\n");
            }

            printf("Sorted By Name");

            break;
        }

        default:
            printf("Wrong Input!!! Please Try Again??\n");
            break;
        }
    }

    return 0;
}