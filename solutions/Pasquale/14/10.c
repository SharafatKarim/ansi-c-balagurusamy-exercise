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
// -----------------------------------

// ---------- main.c -----------------

//! DRIVE FUNCTION
list sort_merge(list l1, list l2) {
    list l3 = NULL;
    int a, b;
    while (!(l1 == NULL && l2 == NULL)) {
        a = (l1 != NULL) ? l1->item : __INT_MAX__;
        b = (l2 != NULL) ? l2->item : __INT_MAX__;

        if (a < b) {
            l3 = insert_list(l3, a);
            l1 = l1->next;
        }
        else {
            l3 = insert_list(l3, b);
            l2 = l2->next;
        }
    }
    return l3;
}

int main() {
    int ar1[] = {1,3,5,7,9};
    int ar2[] = {2,4,6,8,10};
    list l1 = array_to_list(ar1, 5);
    list l2 = array_to_list(ar2, 5);
    list l3 = sort_merge(l1, l2);
    print_list(l3);
    return 0;
}
