#include <stdio.h>

int main()
{

    int i, j;

    printf("Patterns (A):\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("S ");
        }
        printf("\n");
    }

    printf("\nPatterns (B):\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 || j == 0  || j == 4 || i == 4)
                printf("S ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}