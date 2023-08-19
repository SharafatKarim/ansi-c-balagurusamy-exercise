#include <stdio.h>

int binary_search(int *numbers, int n, int x)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (numbers[mid] == x)
        {
            return mid;
        }
        else if (numbers[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int numbers[] = { 1, 3, 5, 7, 12};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    int x = 7;
    int index = binary_search(numbers, count, x);
    printf("Index of %d is %d\n", x, index);
    return 0;
}