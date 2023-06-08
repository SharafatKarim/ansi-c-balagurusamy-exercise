#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student
{
    char name[50];
    int rollNumber;
};

int main()
{
    struct Student directory[MAX_STUDENTS];
    int numStudents;
    int i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", directory[i].name);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &directory[i].rollNumber);
    }

    char searchName[50];
    int searchRollNumber;
    printf("Enter the name to search for roll number: ");
    scanf("%s", searchName);

    for (i = 0; i < numStudents; i++)
    {
        if (strcmp(directory[i].name, searchName) == 0)
        {
            searchRollNumber = directory[i].rollNumber;
            printf("Roll number for %s is %d\n", searchName, searchRollNumber);
            break;
        }
    }
    printf("Enter the roll number to search for name: ");
    scanf("%d", &searchRollNumber);

    for (i = 0; i < numStudents; i++)
    {
        if (directory[i].rollNumber == searchRollNumber)
        {
            strcpy(searchName, directory[i].name);
            printf("Name for roll number %d is %s\n", searchRollNumber, searchName);
            break;
        }
    }

    return 0;
}
