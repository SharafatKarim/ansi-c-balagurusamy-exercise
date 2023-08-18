#include <stdio.h>

void print_array(int *array, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    print_array(array, 10);
    return 0;
}