#include <stdio.h>

void insertValue(int *arr, int *size, int value)
{
    int *p = arr;
    int i = 0;

    while (i < *size && *p < value)
    {
        p++;
        i++;
    }

    for (int j = *size - 1; j >= i; j--)
    {
        *(p + 1) = *p;
        p--;
    }

    *p = value;
    *size = *size + 1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 6;

    insertValue(arr, &size, value);

    printf("The array after inserting the value is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
