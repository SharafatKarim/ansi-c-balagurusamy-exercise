#include <stdio.h>
struct example_struct
{
    int x;
    float y;
    char z;
};

union example_union
{
    int x;
    float y;
    char z;
};

int main()
{
    struct example_struct s;
    union example_union u;

    printf("Size of the structure: %lu bytes\n", sizeof(s));
    printf("Size of the union: %lu bytes\n", sizeof(u));

    return 0;
}
