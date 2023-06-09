#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int size;
    int array1[MAX_SIZE];
    int array2[MAX_SIZE];
    int sum[MAX_SIZE];

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter elements of Array 1:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of Array 2:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array2[i]);
    }

    printf("Sum of the arrays:\n");
    for (int i = 0; i < size; i++)
    {
        sum[i] = array1[i] + array2[i];
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}
