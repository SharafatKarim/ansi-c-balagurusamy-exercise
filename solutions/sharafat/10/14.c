// Develop a top-down modular program that will perform the following tasks:
// ```
// (a) Read two integer arrays with unsorted elements.
// (b) Sort them in ascending order
// (c) Merge the sorted arrays
// (d) Print the sorted list
// ```
// Use functions for carrying out each of the above tasks. The main function should have only function calls.

#include <stdio.h>

void input_array(int *array, int size)
{
    int i;
    printf("Enter array elements: \n");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
}

void print_array(int *array, int size)
{
    int i;
    printf("Array: \n");
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void sort_array(int *array, int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        int min = array[i], min_index = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

void merge_arrays(int *array_one, int *array_two, int *result, int size_one, int size_two)
{
    int i, j;
    for (i = 0; i < size_one; i++)
        result[i] = array_one[i];
    for (j = 0; j < size_two; j++)
        result[i + j] = array_two[j];
}

void operations(void)
{
    int m, n;
    printf("Enter size of array one and array two: ");
    scanf("%d %d", &m, &n);
    int array_one[m], array_two[n];
    input_array(array_one, m);
    input_array(array_two, n);

    sort_array(array_one, m);
    sort_array(array_two, n);

    int result[m + n];
    merge_arrays(array_one, array_two, result, m, n);
    sort_array(result, m+n);

    print_array(result, m + n);
}

int main()
{
    operations();
    return 0;
}
