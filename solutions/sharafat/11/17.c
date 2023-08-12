#include <stdio.h>

struct vector
{
    int *elements;
    char size;
    double double_size;
};

union union_vector
{
    int *elements;
    char size;
    double doule_size;
};

int main()
{
    struct vector v;
    union union_vector u;
    printf("The size of the struct is %lu bytes\n", sizeof(v));
    printf("The size of the union is %lu bytes\n", sizeof(u));
    return 0;
}