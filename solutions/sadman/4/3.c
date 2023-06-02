#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i <= 8; i++)
    {
        for (j = i; j <= 8; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
