#include <stdio.h>
#include <stdlib.h>
struct vector
{
    int *elements;
    int size;
};

void createVector(struct vector *v, int size)
{
    v->elements = (int *)malloc(size * sizeof(int));
    v -> size = size;
}

void addElement(struct vector *v)
{
    int element;
    for (int i = 0; i < v->size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element);
        v->elements[i] = element;
    }
}

struct vector addition(struct vector *v1, struct vector *v2)
{
    struct vector v3;
    createVector(&v3, v1->size);
    for (int i = 0; i < v1->size; i++)
    {
        v3.elements[i] = v1->elements[i] + v2->elements[i];
    }
    return v3;
}

void displayVector(struct vector *v)
{
    printf("Vector: ");
    for (int i = 0; i < v->size; i++)
    {
        printf("%d ", v->elements[i]);
    }
    printf("\n");
}

int main()
{
    struct vector v1, v2;
    int vector_size;
    printf("Enter vector size: ");
    scanf("%d", &vector_size);
    
    createVector(&v1, vector_size);
    addElement(&v1);

    createVector(&v2, vector_size);
    addElement(&v2);

    struct vector v3 = addition(&v1, &v2);
    printf("Addition of two vectors: \n");
    displayVector(&v3);
}