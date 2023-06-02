#include <stdio.h>
int main()
{
    int i, j,n;
    printf("ID:2102020\n");
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}