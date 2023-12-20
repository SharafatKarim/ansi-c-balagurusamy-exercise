#include <stdio.h>
int main()
{
    printf("ID:2102064\n\n");
    int sum = 0, count = 0;
    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
    {
            sum += i;
            count++;
    }
    }

    printf("Number of integers divisible by 7: %d\n", count);
    printf("Sum of integers divisible by 7: %d\n", sum);

    return 0;
}