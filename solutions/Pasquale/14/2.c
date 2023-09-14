#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --------- HEADER FILE list.h ----------
// from REVIEW QUESTIONS 14.8 (pag. 773)
typedef struct
{
    char name[15];
    int age;
    float weight;
} DATA;

struct linked_list
{
    DATA person;
    struct linked_list *next;
};

typedef struct linked_list NODE;
typedef NODE *NDPTR;

/*
list.h is supposed to finish here but I decided to add 
more function in the header file
*/


void print_student(DATA *student) {
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Weight: %f\n", student->weight);
}

DATA read_student() {
    DATA new_student;
    printf("Insert the name of the student: ");
    scanf("%[^\n]", new_student.name); 
    printf("Insert the age: ");
    scanf("%d", &new_student.age);
    printf("Insert the weight (point separated decimals): ");
    scanf("%f", &new_student.weight);
    getchar();
    return new_student;
}

void edit_student(DATA *mod) {
    char choose;
    printf("Modify name? (y/N) ");
    scanf("%c", &choose); getchar();
    if (choose == 'y') {
        printf("Insert the new name: ");
        scanf("%[^\n]", mod->name); getchar(); 
    }
    printf("Modify age? (y/N) ");
    scanf("%c", &choose); getchar();
    if (choose == 'y') {
        printf("Insert the new age: ");
        scanf("%d", &mod->age); getchar();
    }
    printf("Modify weight? (y/N) ");
    scanf ("%c", &choose); getchar();
    if (choose == 'y') {
        printf("Insert the new weight: ");
        scanf("%f", &mod->weight); getchar();
    }
}

void init_list(NDPTR list) {
    list = (NDPTR) malloc(sizeof(NODE));
}

void create(NDPTR list) {
    char choose;

    // create current node
    list->person = read_student();

    printf("Insert new student? (y/N)\n");
    scanf("%c", &choose); getchar();
    if (choose != 'y') {
        list->next = NULL;
        return;
    }
    else {
        // create next node
        list->next = (NDPTR) malloc(sizeof(NODE));
        create(list->next);
    }
}

void print_list(NDPTR list) {
    for (int i = 0; list != NULL; i++) {
        printf("Student #%d:\n", i+1);
        print_student(&list->person);
        printf("\n");
        list = list->next;
    }
}

void edit_list(NDPTR list) {
    int mod_index;
    printf("Insert the number of the student to modify: ");
    scanf("%d", &mod_index); mod_index--;
    getchar();

    for (int i = 0; list != NULL; i++) {
        if (i == mod_index) {
            edit_student(&list->person);
            return;
        }
        list = list->next;
    }

    printf("Student not found\n");
}

// ---------------------------------------


// MAIN FILE:
#include <stdio.h>
#include <stdlib.h>
// #include <list.h> (to include if the data structure is in another file)

// returns the choose of the user
int menu(NDPTR list); 
int count_above(NDPTR list, int ref_age, float ref_weight);

int main()
{
    NDPTR students;
    init_list(students);
    create(students);
    while(menu(students));
    printf("Bye\n");
    return 0;
}


int menu(NDPTR list) {
    int choose;
    printf("1. Write out the contents of the list.\n");
    printf("2. Edit the details of a specified student.\n");
    printf("3. Count the number of students above a specified age and weight.\n");
    printf("Anything else to quit\n>");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            print_list(list);
            break;
        case 2:
            edit_list(list);
            break;
        case 3:
            int counter;
            int ref_age;
            float ref_weight;
            
            printf("Specify the age: ");
            scanf("%d", &ref_age); getchar();
            printf("Specify the weight: ");
            scanf("%f", &ref_weight);
            counter = count_above(list, ref_age, ref_weight);
            printf("The number of students above the specified data are: %d\n", counter);
            break;
        default:
            choose = 0;
    }
    printf("\n");
    return choose;
}

int count_above(NDPTR list, int ref_age, float ref_weight) {
    int counter = 0;
    while (list != NULL)
    {
        if (list->person.age > ref_age && list->person.weight > ref_weight) {
                counter++;
            }
        list = list->next;
    }
    return counter;
}
