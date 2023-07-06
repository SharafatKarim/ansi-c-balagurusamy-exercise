#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    printf("The value of a is: %d\n", a);
    printf("The value of ptr is: %p\n", ptr);
    printf("The value of *ptr is: %d\n", *ptr);

    ptr++;

    printf("The value of a is: %d\n", a);
    printf("The value of ptr is: %p\n", ptr);
    printf("The value of *ptr is: %d\n", *ptr);

    return 0;
}
