#include<stdio.h>

void swap_two_elements_from_an_array(int array[], int first_element_index, int second_element_index)
{
    int temp = array[first_element_index];
    array[first_element_index] = array[second_element_index];
    array[second_element_index] = temp;
}

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

    int minimum;
    for(i=0; i<element_number_of_array; i++)
    {
        minimum = i;
        for(j=i+1; j<element_number_of_array; j++)
        {
            if (array[j] < array[minimum])
            {
                minimum = j;
            }
        }
        if (minimum != i)
        {
            swap_two_elements_from_an_array(array, i, minimum);
        }
    }

    printf("Sorted array: ");
    for (i=0; i<element_number_of_array; i++)
    {
        printf("%d ", array[i]);
    }
}