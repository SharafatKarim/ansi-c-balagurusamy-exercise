#include<stdio.h>

int main()
{
    int i, j;
    int col = 5;
    char Char = 'S';
    char Char2 = 'O';

    for (i=0; i< col; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i==j && i==2)
                printf("%c ", Char2);
            else
                printf("%c ", Char);
        }
        printf("\n");
    }
}
