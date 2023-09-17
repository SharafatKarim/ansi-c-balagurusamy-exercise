/*
only the implementation of the function
void insert_list(list *l);
in the list.c from 4.c file has been changed.
<string.h> has been added into list.c
*/

// ---------- list.h -------------------
#define MAXLEN_STR 15
typedef struct customer_tag {
    char name[MAXLEN_STR];
    char phone[MAXLEN_STR];
} customer;

void print_customer(customer *c);
customer input_customer();


typedef struct node_tag {
    customer customer;
    struct node_tag *next;
} node;
typedef node *list;

list new_list();
void print_list(list l);
void insert_list(list *l);
void delete_list(list *l, int index);
// ------------------------------------

// ----------- list.c -----------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_customer(customer *c) {
    printf("Name: %s\n", c->name);   
    printf("phone: %s\n\n", c->phone);   
}

customer input_customer() {
    customer c;
    printf("Insert the name: ");
    scanf("%s", c.name);
    printf("Insert the phone number: ");
    scanf("%s", c.phone);
    return c;
}


list new_list() {
    return (list) malloc(sizeof(node));
}

void print_list(list l) {
    if (l == NULL) {
        printf("The customer list is empty\n");
        return;
    }
    for (int i = 1; l != NULL; i++)
    {
        printf("Customer #%d:\n", i);
        print_customer(&l->customer);
        l = l->next;
    }
}

void insert_list(list *l) {
    if (*l == NULL) {
        *l = new_list();
        (*l)->customer = input_customer();
        (*l)->next = NULL;
        return;
    }
    else {
        list copy = *l;
        list prec = NULL;
        //creating the new node
        list last = new_list();
        last->customer = input_customer();

        // find the right spot to place it
        // while the left compared name is less than the new customer name
        while (copy != NULL && strncmp(copy->customer.name, last->customer.name, MAXLEN_STR) < 0) {
            prec = copy;
            copy = copy->next;
        }
        
        // making connections
        last->next = copy;
        if (prec != NULL) prec->next = last;
        else {
            *l = last;
        }
    }
}

void delete_list(list *l, int index) {
    if (index == 0) {
        list tmp = *l;
        (*l) = (*l)->next;
        free(tmp);
        printf("User deleted\n");
        return;
    }

    list actual = *l;
    list prec;
    int i;
    for (i = 0; i < index && actual->next != NULL; i++) {
        prec = actual;
        actual = actual->next;
    }
    if (i == index) {
        prec->next = actual->next;
        free(actual);
        printf("User deleted\n");
    } 
    else {
        printf("User doesn't exist\n");
    }
}
// ------------------------------------


// ------------ main.c ----------------
#include <stdio.h>
#include <stdlib.h>
// #include "list.h"

int main() {
    list customers = NULL;
    int operation;

    printf("Welcome\n");
    do {
        printf("1. Print all customers\n");
        printf("2. Add customer\n");
        printf("3. Delete customer\n");
        printf("0. Exit\n>");
        scanf("%d", &operation); getchar();
        
        switch (operation)
        {
        case 1:
            print_list(customers);
            break;
        case 2:
            insert_list(&customers);
            break;
        case 3:
            int index;
            printf("Insert the number of the customer to be deleted: ");
            scanf("%d", &index); index--;
            delete_list(&customers, index);
            break;
        default:
            operation = 0;
            break;
        }
    } while (operation);
    printf("Bye\n");
    
    return 0;
}
