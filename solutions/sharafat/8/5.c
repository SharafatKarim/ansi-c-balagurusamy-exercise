#include <stdio.h>
int main()
{
    int exam_results[100][4];

    for (int i = 0; i < 100; i++)
    {
        printf("Enter roll number: \n");
        scanf("%d", &exam_results[i][0]);
        for (int j = 1; j < 4; j++)
        {
            printf("Enter marks for student %d in subject %d: ", exam_results[i][0], j);
            scanf("%d", &exam_results[i][j]);
        }
    }

    int total = 0;
    int total_position = 0;
    for (int i = 0; i < 100; i++)
    {
        int temp = 0;
        for (int j = 1; j < 4; j++)
        {
            temp += exam_results[i][j];
        }
        printf("Total marks for student %d is %d\n", exam_results[i][0], temp);
        if (total < temp)
        {
            total = temp;
            total_position = i;
        }
    }

    int highest_marks_in_subjects[3] = {0, 0, 0};
    int highest_marks_in_subjects_position[3] = {0, 0, 0};

    for (int i = 0; i < 100; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (highest_marks_in_subjects[j - 1] < exam_results[i][j])
            {
                highest_marks_in_subjects[j - 1] = exam_results[i][j];
                highest_marks_in_subjects_position[j - 1] = i;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Highest marks in subject %d is %d by student %d\n", i + 1, highest_marks_in_subjects[i], exam_results[highest_marks_in_subjects_position[i]][0]);
    }

    printf("Student %d got the highest marks\n", exam_results[total_position][0]);
}