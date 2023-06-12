#include<stdio.h>

int main()
{
    int element_number_of_array;
    printf("Enter element number of array: ");
    scanf("%d", &element_number_of_array);
    int array[element_number_of_array];

    int i, j;
    for (i=0; i<element_number_of_array; i++)
    {
        printf("Enter element %d of array: ", i+1);
        scanf("%d", &array[i]);
    }

    int search_element;
    printf("Enter element to search: ");
    scanf("%d", &search_element);

    int found = 0, temp, num = element_number_of_array;
    
    int mid;
    int low = 0;
    int high = element_number_of_array - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == search_element)
        {
            found = 1;
            break;
        }
        else if (array[mid] > search_element)
        {
            high = mid - 1;
        }
        else if (array[mid] < search_element)
        {
            low = mid + 1;
        }
    }

    if (found)
    {
        printf("Element found at index %d\n", i);
    }
    else
    {
        printf("Element not found\n");
    }
}