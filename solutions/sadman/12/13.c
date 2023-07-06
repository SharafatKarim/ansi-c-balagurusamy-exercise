#include <stdio.h>

int main()
{
    int *ptrArray[3];
    int a = 10, b = 20, c = 30;

    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;

    printf("The addresses of the array of pointers are:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("ptrArray[%d] = %d\n", i, ptrArray[i]);
    }

    printf("\nThe values pointed by the array of pointers are:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("*ptrArray[%d] = %d\n", i, *ptrArray[i]);
    }

    return 0;
}
