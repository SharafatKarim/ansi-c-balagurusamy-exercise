#include <stdio.h>

int main()
{
    int n, j;
    //printf("Enter a positive integer: ");
    //scanf("%d", &n);

    int is_prime = 1;
    for (j = 100; j <= 200; j++)
    {
        for (int i = 2; i <= j / 2; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d ", j);
        }
    }
}
