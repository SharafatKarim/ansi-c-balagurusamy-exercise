#include <stdio.h>

int main()
{
    int number, count = 0, sum = 0;

    for (number = 101; number < 200; number++)
    {
        if (number % 7 == 0)
        {
            count++;
            sum += number;
        }
    }

    printf("Number of integers divisible by 7: %d\n", count);
    printf("Sum of integers divisible by 7: %d\n", sum);


    return 0;
}
