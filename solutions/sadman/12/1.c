#include <stdio.h>

void printReverse(int *arr, int size)
{
    int *ptr = arr + size - 1; 

    printf("Array elements in reverse order: ");
    while (ptr >= arr)
    {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");
}

int main()
{
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printReverse(arr, size);

    return 0;
}
