#include<stdio.h>

int main()
{
    int i, j;
    int sum=0;

    for (i=0; i< 10; i++)
    {
        scanf("%d", &j);
        sum += j;
        printf("%d + ", j);
    }
    printf("\nSum -> %d", sum);
}

// test case
// 1 2 3 4 5 6 7 8 9 10
