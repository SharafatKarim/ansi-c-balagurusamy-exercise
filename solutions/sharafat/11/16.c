#include <stdio.h>

struct vector
{
    int *elements;
    int size;
};

int main()
{
    struct vector v;
    printf("The size of the vector is %lu bytes\n", sizeof(v));
    return 0;
}