#include <stdio.h>
int main()
{
    int a, n, i, r;
    int sum = 0;
    printf("ID:2102020\n");
    printf("enter the number:");
    scanf("%d", &a);
    for (i = 1; a != 0; i++)
    {
        r = a % 10;
        sum = sum + r;
        a = a / 10;
    }
    printf("%d", sum);
}