#include <stdio.h>

struct student
{
    int id;
    char name[20];
    float gpa;
};

int main()
{
    struct student *ptr;
    ptr = malloc(sizeof(struct student));

    ptr->id = 101;
    strcpy(ptr->name, "John Doe");
    ptr->gpa = 3.5;

    printf("The id of the student is: %d\n", ptr->id);
    printf("The name of the student is: %s\n", ptr->name);
    printf("The gpa of the student is: %f\n", ptr->gpa);

    free(ptr);

    return 0;
}
