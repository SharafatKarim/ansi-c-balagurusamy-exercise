#include <stdio.h>

int main()
{
    int i, j, value = 1;

    printf("Program A:\n");
    for (i = 1; i <= 13; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", value++);
        }
        printf("\n");
    }

    printf("\nProgram B:\n");
    for (i = 1; i <= 13; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                    printf("0 ");
                else
                    printf("1 ");
                    
            }
        }
        else
        {
            for (j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                    printf("1 ");
                else
                    printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
