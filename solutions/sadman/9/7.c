#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char vtype[100][50];
    char salemonth[100][10];
    char price[100][10];

    int counter = 0, i, j, k, choice, del;

    while (1)
    {
        printf("\t\tVehicle Record List\n");
        printf("\t\t-------------------\n");

        printf("\t1 -> ADD Sales Record.\n");
        printf("\t2 -> VIEW Sales Record.\n");
        printf("\t3 -> DELETE Old Record.\n");
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
            printf("Enter Vehicle Type: ");
            gets(vtype[counter]);

            printf("Enter Months of Sales: ");
            gets(salemonth[counter]);

            printf("Enter Vehicle Price: ");
            gets(price[counter]);

            printf("\n\n Thank You!!! New Record Added.\n\n");
            counter++;

            break;
        }

        case 2:
        {
            printf("\t\t\t\t All Sales Records Table\n");

            printf("\t\t------------------------------------------------------\n");
            printf("\t\t|SI |\tVehicle Types    |    Month of Sales    |    Price    |\n");
            printf("\t\t------------------------------------------------------\n");
            for (i = 0; i < counter; i++)
            {
                printf("\t\t|%2d |%15s \t| %15s\t| %5s\t|\n", i + 1, vtype[i], salemonth[i], price[i]);
                printf("\t\t------------------------------------------------------\n");
            }
            break;
        }

        case 3:
        {
            printf("\t\t\t\t All Sales Records Table\n");
            printf("\t\t------------------------------------------------------\n");
            for (i = 0; i < counter; i++)
            {
                printf("\t\t|%2d |%15s \t| %15s\t| %5s\t|\n", i + 1, vtype[i], salemonth[i], price[i]);
                printf("\t\t------------------------------------------------------\n");
            }
            printf("\n\tEnter Record Number: ");
            scanf("%d", &del);
            del--;
            for (i = del; i < counter; i++)
            {
                strcpy(vtype[i], vtype[i + 1]);
                strcpy(salemonth[i], salemonth[i + 1]);
                strcpy(price[i], price[i + 1]);
            }
            counter--;
            break;
        }

        default:
            printf("Wrong Input!!! Please Try Again??\n");
            break;
        }
    }

    return 0;
}