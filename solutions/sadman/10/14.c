#include <stdio.h>

void mergeArrays(int array1[], int size1, int array2[], int size2, int mergedArray[])
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (array1[i] <= array2[j])
        {
            mergedArray[k] = array1[i];
            i++;
        }
        else
        {
            mergedArray[k] = array2[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        mergedArray[k] = array1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        mergedArray[k] = array2[j];
        j++;
        k++;
    }
}

int main()
{
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int array1[size1];

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int array2[size2];

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
    }

    int mergedArray[size1 + size2];
    mergeArrays(array1, size1, array2, size2, mergedArray);

    printf("Sorted list after merging the arrays:\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
