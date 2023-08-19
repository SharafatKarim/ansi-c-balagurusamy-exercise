#include <stdio.h>

void reverse_array(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int numbers[] = { 1, 3, 5, 7, 12};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    reverse_array(numbers, count);

    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }
}