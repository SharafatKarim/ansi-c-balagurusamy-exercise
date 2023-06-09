#include <stdio.h>
#include <math.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int i = 0, n, j;
    scanf("%d", &n);
    for (; i < n ; i++)
    {
        for ( j = 0; j <= i; j++ )
        {
            if (i % 2 == j % 2)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}