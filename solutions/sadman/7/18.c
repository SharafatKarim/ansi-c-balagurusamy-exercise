#include <stdio.h>

int main()
{
    int number = 1;
    char character = 'a';
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", character);
                character++;
            }
            else
            {
                printf("%d", number);
                number++;
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
