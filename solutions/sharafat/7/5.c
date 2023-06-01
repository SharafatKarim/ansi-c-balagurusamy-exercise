#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=1; j<=i+1; j++)
            printf("%d ", i+1);
        printf("\n");
    }

    printf("\n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<i; j++)
            printf("  ");
        for ( j=n-i ; j>0 ; j-- )
            printf("* ");
        printf("\n");
    }
}
