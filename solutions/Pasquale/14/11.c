// ---------------- list.h --------------------
typedef struct node_tag {
    int item;
    struct node_tag *next;
} node;
typedef node *list;
list new_list();
list insert_list(list l, int item);
list array_to_list(int array[], int size); // for testing
void print_list(list l);

// asked function
list last_node(list head);
// --------------------------------------------

// ---------------- list.c --------------------
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
        printf("'%d' is at address: %p\n", l->item, l);
        return l;
    }

    list last = new_list();
    last->item = item;
    last->next = NULL;
    
    list copy = l;
    for (; copy->next != NULL; copy = copy->next);
    copy->next = last;
    printf("'%d' is at address: %p\n", last->item, last);
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

// driver function
list last_node(list head) {
    if (head == NULL) return NULL;
    for (; head->next != NULL; head = head->next);
    return head;    
}
// --------------------------------------------

// ---------------- main.c --------------------
// test case
int main() {
    list l = NULL;
    l = insert_list(l, 1);
    l = insert_list(l, 2);
    l = insert_list(l, 3);
    l = insert_list(l, 4);
    printf("THE LAST ADDRESS IS: %p\n", last_node(l));
}
// --------------------------------------------


