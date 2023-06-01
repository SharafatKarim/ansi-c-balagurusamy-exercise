#include<stdio.h>

int main()
{
    int i, j;
    int digit=1;
    char letter='A';
    int n;
    scanf("%d", &n);

    for (i=0; i< n; i++)
    {
        for (j=0; j<(5-i);j++)
            printf(" ");
        for (j=0; j<= i; j++)
        {
            if (i%2==0)
                printf("%d ", digit++);
            else
                printf("%c ", letter++);
        }
        printf("\n");
    }
}

