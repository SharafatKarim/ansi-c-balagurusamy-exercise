#include <stdio.h>

struct vector
{
    int *elements; 
    int size;    

};
struct vector createVector(int size)
{
    struct vector v;
    v.elements = (int *)malloc(size * sizeof(int));
    v.size = size;

    return v;
}

void modifyElement(struct vector *v, int index, int newValue)
{
    if (index >= 0 && index < v->size)
        v->elements[index] = newValue;
}


void multiplyByScalar(struct vector *v, int scalar)
{
    for (int i = 0; i < v->size; i++)
    {
        v->elements[i] *= scalar;
    }
}


void displayVector(struct vector v)
{
    printf("(");
    for (int i = 0; i < v.size; i++)
    {
        printf("%d", v.elements[i]);
        if (i != v.size - 1)
            printf(", ");
    }
    printf(")\n");
}

int main()
{
    struct vector v = createVector(5);

  
    v.elements[0] = 10;

    
    displayVector(v);

   
    multiplyByScalar(&v, 2);

    
    displayVector(v);

   
    free(v.elements);

    return 0;
}
