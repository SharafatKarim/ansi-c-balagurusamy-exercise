#include <stdio.h>

int check_identical(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int arr1[] = { 1, 3, 5, 7, 12};
    int arr2[] = { 1, 3, 5, 7, 12};
    int count = sizeof(arr1) / sizeof(arr1[0]);

    int identical = check_identical(arr1, arr2, count);

    if (identical)
    {
        printf("Identical\n");
    }
    else
    {
        printf("Not identical\n");
    }
}