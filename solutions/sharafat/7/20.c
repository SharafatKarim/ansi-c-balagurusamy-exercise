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
        for (j=0; j<= i; j++)
            printf("%d ", ((i+j)%2==0?1:0));
        printf("\n");
    }
}

