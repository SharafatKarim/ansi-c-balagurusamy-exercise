#include <stdio.h>
int main()
{
    int size, count = 0, sum = 0;
    int array[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 != 0)
        {
            count++;
            sum += array[i];
        }
    }

    printf("Number of odd numbers: %d\n", count);
    printf("Sum of odd numbers: %d\n", sum);

    return 0;
}
