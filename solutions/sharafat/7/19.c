#include<stdio.h>

int main()
{
    int i, j;
    int digit=1;
    char letter='A';
    int n;
    scanf("%d", &n);

    for (i=0; i< n/2; i++)
    {
        for (j=0; j<(5-i);j++)
            printf("  ");
        for (j=1; j<= i+1; j++)
            printf("%d ", j);
        for (j=j-2;j>=1;j--)
            printf("%d ", j);
        printf("\n");
    }

    for (i=n/2; i>= 0; i--)
    {
        for (j=0; j<(5-i);j++)
            printf("  ");
        for (j=1; j<= i+1; j++)
            printf("%d ", j);
        for (j=j-2;j>=1;j--)
            printf("%d ", j);
        printf("\n");
    }
}

