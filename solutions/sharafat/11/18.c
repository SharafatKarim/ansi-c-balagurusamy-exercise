#include <stdio.h>
#include <string.h>

struct person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    struct person p1 = {
        .name = "John",
        .age = 25,
        .height = 1.75,
    };
    printf("Original values:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    char *name;
    int *age;
    float *height;

    name = p1.name;
    age = &p1.age;
    height = &p1.height;

    strcpy(name, "Sharafat");
    *age = 30;
    *height = 1.80;

    printf("\nUpdated values:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0; 
}