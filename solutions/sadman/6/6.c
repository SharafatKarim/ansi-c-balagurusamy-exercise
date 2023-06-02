#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    float k = 0.0;

    printf("\t\t\t\t    Square Root Table\n");

    for (i = 0; i < 130; i++)
        printf("-");

    printf("\n");

    printf("| Number |    0.0    |    0.1    |    0.2    |    0.3    |    0.4    |    0.5    |    0.6    |    0.7    |    0.8    |    0.9    |\n");

    for (i = 0; i < 130; i++)
        printf("-");

    printf("\n");

    for (i = 0; i <= 9; i++)
    {
        printf("|   0.%d  |", i);
        for (j = 0; j <= 9; j++)
        {
            printf("  %4.3f  |", sqrt(k));
            k += 0.1;
        }
        printf("\n");
    }

    return 0;
}
