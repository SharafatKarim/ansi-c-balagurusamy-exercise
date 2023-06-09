#include <stdio.h>

int main()
{
    int i, key, size, low, high, mid, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int elements[size];

    printf("Enter %d integers in ascending order:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &elements[i]);
    }

    printf("Enter the search key: ");
    scanf("%d", &key);

    low = 0;
    high = size - 1;
    mid = (low + high) / 2;
    pos = -1;

    while (low <= high)
    {
        if (elements[mid] == key)
        {
            pos = mid;
            break;
        }
        else if (elements[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

        mid = (low + high) / 2;
    }

    if (pos != -1)
    {
        printf("%d found at location %d.\n", key, pos + 1);
    }
    else
    {
        printf("Element %d is not present in the array.\n", key);
    }

    return 0;
}
