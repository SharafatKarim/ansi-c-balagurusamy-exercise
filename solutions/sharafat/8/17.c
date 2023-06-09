#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int sum_of_odd_numbers = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            sum_of_odd_numbers += numbers[i];
        }
    }

    printf("%d\n", sum_of_odd_numbers);
}