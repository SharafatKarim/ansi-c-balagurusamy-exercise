#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll_no;
    char name[50];
};

int main()
{
    struct student students[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &students[i].roll_no);
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
    }

    printf("\n\n");
    printf("Type student name or roll number to search: \n");
    char search[50];
    scanf("%s", search);

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].roll_no == atoi(search) || strcmp(students[i].name, search) == 0)
        {
            printf("Roll No: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            found = 1;
            break;
        }
    }
}