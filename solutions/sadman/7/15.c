#include <stdio.h>

int main()
{

    int i, j;

    printf("Patterns (A) Extra:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 2 && j == 2)
                printf("O ");
            else
                printf("S ");
        }
        printf("\n");
    }

    return 0;
}