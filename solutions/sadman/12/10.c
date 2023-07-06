#include <stdio.h>

int compareArrays(int *arr1, int *arr2, int n)
{
    for (int i = 0; i < n; i++)
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
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int result = compareArrays(arr1, arr2, n);

    if (result == 1)
    {
        printf("The arrays are identical.\n");
    }
    else
    {
        printf("The arrays are not identical.\n");
    }

    return 0;
}
