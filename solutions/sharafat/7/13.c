#include<stdio.h>

int main()
{
    int i, j;
    int col = 5;
    char Char = 'S';

    for (i=0; i< col; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%c ", Char);
        }
        printf("\n");
    }

    printf("\n");

    for (i=0; i< col; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i==0||j==0||i==col-1||j==col-1)
                printf("%c ", Char);
            else
                printf("  ");
        }
        printf("\n");
    }
}
