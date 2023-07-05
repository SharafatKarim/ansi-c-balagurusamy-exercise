#include <stdio.h>
#include <stdlib.h>

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

struct vector addVectors(struct vector v1, struct vector v2)
{
    struct vector result;
    result.size = v1.size;
    result.elements = (int *)malloc(result.size * sizeof(int));

    for (int i = 0; i < result.size; i++)
    {
        result.elements[i] = v1.elements[i] + v2.elements[i];
    }

    return result;
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
    struct vector v1 = createVector(5);
    struct vector v2 = createVector(5);
    struct vector result;

    v1.elements[0] = 1;
    v1.elements[1] = 2;
    v1.elements[2] = 3;
    v1.elements[3] = 4;
    v1.elements[4] = 5;

    v2.elements[0] = 6;
    v2.elements[1] = 7;
    v2.elements[2] = 8;
    v2.elements[3] = 9;
    v2.elements[4] = 10;

    result = addVectors(v1, v2);

    displayVector(result);

    free(v1.elements);
    free(v2.elements);
    free(result.elements);

    return 0;
}
