#include <stdio.h>

int main()
{
    int i, j, sum = 0;
    int max_total = 0, max_sub[3] = {0};
    int marks[100][4] = {0}, highest[100] = {0};

    printf("Enter Marks of 100 Students: \n");

    for (i = 0; i < 100; i++)
    {
        marks[i][0] = i + 1;
        for (j = 1; j < 4; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("Roll    Subject1    Subject2    Subject3    Total Marks\n");
    for (i = 0; i < 100; i++)
    {
        sum = 0;
        for (j = 1; j < 4; j++)
        {
            sum += marks[i][j];
        }

        if (max_total < sum)
            max_total = sum;
        highest[i] = sum;

        printf("%4d    %8d    %8d    %8d    %10d\n", marks[i][0], marks[i][1], marks[i][2], marks[i][3], highest[i]);
    }

    // Max Subject Marks
    for (i = 0; i < 100; i++)
    {
        if (max_sub[0] < marks[i][1])
            max_sub[0] = marks[i][1];
        if (max_sub[1] < marks[i][2])
            max_sub[1] = marks[i][2];
        if (max_sub[2] < marks[i][3])
            max_sub[2] = marks[i][3];
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n----------------------------------------------------------------\n");
        printf("\tHighest on Subject%d:\nMarks: %d\nRolls: ", i + 1, max_sub[i]);

        for (j = 0; j < 100; j++)
        {
            if (marks[j][i + 1] == max_sub[i])
                printf("%d\t", marks[j][0]);
        }
        printf("\n");
    }

    return 0;
}
