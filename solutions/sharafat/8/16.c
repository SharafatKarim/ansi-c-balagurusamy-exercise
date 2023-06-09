#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter first array's element number: ");
    scanf("%d", &a);
    printf("Enter second array's element number: ");
    scanf("%d", &b);

    int arr1[a], arr2[b], total_sum = 0;
    for (int i = 0; i < a; i++)
    {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &arr1[i]);
        total_sum += arr1[i];
    }

    for (int i = 0; i < b; i++)
    {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &arr2[i]);
        total_sum += arr2[i];
    }

    printf("Total sum of both arrays: %d\n", total_sum);

}