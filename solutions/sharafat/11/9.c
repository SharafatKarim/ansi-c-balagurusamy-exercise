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

void modifyElement(struct vector *v)
{
    int index;
    int newValue;
    printf("Enter index: ");
    scanf("%d", &index);
    printf("Enter new value: ");
    scanf("%d", &newValue);
    if (index >= 0 && index < v->size)
        v->elements[index] = newValue;
}

void multiplyByScalar(struct vector *v)
{
    int scalar;
    printf("Enter scalar: ");
    scanf("%d", &scalar);
    for (int i = 0; i < v->size; i++)
    {
        v->elements[i] *= scalar;
    }
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
    struct vector v;
    int vector_size;
    printf("Enter vector size: ");
    scanf("%d", &vector_size);
    createVector(&v, vector_size);
    addElement(&v);
    displayVector(&v);

    modifyElement(&v);
    displayVector(&v);

    multiplyByScalar(&v);
    displayVector(&v);
}