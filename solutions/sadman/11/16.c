#include <stdio.h>
struct example
{
    int x;
    float y;
    char z;
};

int main()
{
    struct example s;

    printf("Size of the structure: %lu bytes\n", sizeof(s));

    return 0;
}
