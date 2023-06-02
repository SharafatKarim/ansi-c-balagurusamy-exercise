#include <stdio.h>

int main()
{

    int i, ages, counter = 0;

    printf("Enter Ages of 100 persons:\n");
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &ages);
        if (ages > 50 && ages <= 60)
            counter++;
    }
    printf("Total number person Aged between (50 to 60): %d\n", counter);
    return 0;
}