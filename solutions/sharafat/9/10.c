#include<stdio.h>

struct student
{
    int roll_no;
    char name[50];
    int marks;
};

void sorting_array_with_index(int main[], int sorted_index[])
{
    int n = sizeof(main)/sizeof(main[0]);
    
    for (int i = 0; i < n; i++)
    {
        sorted_index[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            if (main[sorted_index[j]] > main[sorted_index[j+1]])
            {
                int temp = sorted_index[j];
                sorted_index[j] = sorted_index[j+1];
                sorted_index[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student students[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &students[i].roll_no);
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &students[i].marks);
    }

    printf("\n\n");
    printf("Table of students (alphabetic list)\n");
    printf("Roll No\t\tName\t\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n", students[i].roll_no, students[i].name, students[i].marks);
    }
    
    printf("\n\n");
    printf("Table of students (sorted on roll numbers)\n");
    int sorted_roll_no_index[n];
    int students_roll_no[n];
    for (int i = 0; i < n; i++)
    {
        students_roll_no[i] = students[i].roll_no;
    }
    sorting_array_with_index(students_roll_no, sorted_roll_no_index);
    printf("Roll No\t\tName\t\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n", students[sorted_roll_no_index[i]].roll_no, students[sorted_roll_no_index[i]].name, students[sorted_roll_no_index[i]].marks);
    }
    printf("\n\n");
    printf("Table of students (sorted on marks)\n");
    int sorted_marks_index[n];
    int students_marks[n];
    for (int i = 0; i < n; i++)
    {
        students_marks[i] = students[i].marks;
    }
    sorting_array_with_index(students_marks, sorted_marks_index);
    printf("Roll No\t\tName\t\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n", students[sorted_marks_index[i]].roll_no, students[sorted_marks_index[i]].name, students[sorted_marks_index[i]].marks);
    }
    printf("\n\n");
    return 0;
}