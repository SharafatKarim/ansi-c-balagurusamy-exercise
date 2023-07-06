#include <stdio.h>

int binarySearch(int *arr, int low, int high, int item)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == item)
        {
            return mid;
        }
        else if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int item = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, 0, n - 1, item);

    if (index == -1)
    {
        printf("Item not found.\n");
    }
    else
    {
        printf("Item found at index: %d\n", index);
    }

    return 0;
}
