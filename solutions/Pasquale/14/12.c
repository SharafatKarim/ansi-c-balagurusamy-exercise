// ---------- list.h -----------------
typedef struct node_tag {
    int item;
    struct node_tag *next;
} node;
typedef node *list;

list new_list();
list insert_list(list l, int item);
list array_to_list(int array[], int size); // for testing
void print_list(list l);
int list_size(list l);
// -----------------------------------

// ---------- list.c -----------------
#include <stdlib.h>
#include <stdio.h>

list new_list() {
    return (list) malloc(sizeof(node));
}

list insert_list(list l, int item) {
    if (l == NULL) {
        l = new_list();
        l->item = item;
        l->next = NULL;
        return l;
    }

    list last = new_list();
    last->item = item;
    last->next = NULL;
    
    list copy = l;
    for (; copy->next != NULL; copy = copy->next);
    copy->next = last;
    return l;
}

list array_to_list(int array[], int size) {
    if (size <= 0) return NULL;
    list l = new_list();
    list copy = l;
    for (int i = 0; i < size; i++) {
        copy->item = array[i];
        copy->next = NULL;
        if (i+1 < size) {
            copy->next = new_list();
            copy = copy->next;
        }
    }
    return l;
}

void print_list(list l) {
    for (; l != NULL; l = l->next) printf("%d - ", l->item);
    printf("\n");
}

int list_size(list l) {
    int size;
    for (size = 0; l != NULL; l = l->next, size++);
    return size;
}
// -----------------------------------

// ---------- main.c -----------------

int main() {
    list l = NULL;

    // insert here the number of nodes
    #define LENGHT 100
    for (int i = 0; i < LENGHT; i++) l = insert_list(l, i);
    printf("%d\n", list_size(l));
    return 0;
}
