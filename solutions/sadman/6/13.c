#include <stdio.h>

int main()
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
            sum += i;
            count++;
        }
    }

    printf("Sum of integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100: %d\n", sum);
    printf("Number of such values: %d\n", count);

    return 0;
}
