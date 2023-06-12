#include<stdio.h>

int main()
{
    int a, b;
    printf("Elements number of first array: ");
    scanf("%d", &a);
    printf("Elements number of second array: ");
    scanf("%d", &b);

    int first_array[a], second_array[b];
    int i, j;

    for (i=0; i<a; i++)
    {
        printf("Enter element %d of first array: ", i+1);
        scanf("%d", &first_array[i]);
    }
    for (i=0; i<b; i++)
    {
        printf("Enter element %d of second array: ", i+1);
        scanf("%d", &second_array[i]);
    }

    int merged_array[a+b];
    int count = 0;

    i = 0;
    j = 0;

    while (i < a)
    {
        if (first_array[i] < second_array[j])
        {
            merged_array[count] = first_array[i];
            count++;
            i++;
        }
        else
        {
            merged_array[count] = second_array[j];
            count++;
            j++;
        }
    }
    while (j < b)
    {
        merged_array[count] = second_array[j];
        count++;
        j++;
    }
    
    printf("Merged array: ");
    for (i=0; i<count; i++)
    {
        printf("%d ", merged_array[i]);
    }
}