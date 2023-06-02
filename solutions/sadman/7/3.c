#include <stdio.h>

int main()
{
    int n;
    printf("ID:2102020\n");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("1 ");
    }
    if (n >= 2)
    {
        printf("1 ");
    }
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++)
    {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}