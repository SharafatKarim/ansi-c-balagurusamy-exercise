#include <stdio.h>

// Define the date structure
struct date
{
    int day;
    int month;
    int year;
};

// Define the student_record structure
struct student_record
{
    char name[50];
    struct date dob;
    int totalMarks;
};

int main()
{
    struct student_record students[] = {
        {
            .name = "John Doe",
            .dob = {1, 1, 2000},
            .totalMarks = 90,
        },
        {
            .name = "Jane Doe",
            .dob = {2, 2, 2000},
            .totalMarks = 80,
        },
        {
            .name = "Peter Smith",
            .dob = {3, 3, 2000},
            .totalMarks = 70,
        },
    };

    // Sort the students rank-wise based on total marks
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (students[i].totalMarks < students[j].totalMarks)
            {
                struct student_record temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Display the students rank-wise
    printf("\nStudents Rank-wise:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Rank %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Date of Birth: %d-%d-%d\n", students[i].dob.day, students[i].dob.month, students[i].dob.year);
        printf("Total Marks: %d\n", students[i].totalMarks);
        printf("\n");
    }

    return 0;
}
